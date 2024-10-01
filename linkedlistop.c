#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
}*head;
void insertion_at_front();
void Insertion_at_end();
void insertion_at_any_position();
void deletion_at_front();
void deletion_at_end();
void deletion_at_any_position();
void display();
void main()
{
int ch;
do{
  printf("enter the choice\t1)insert at front\t2)insert at end\t3)insert at any position\t4)delete at front\t5)delete at end\t6)delete at any position\t7)display\t8)exit\n");
  scanf("%d",&ch);
  switch(ch){
    case 1:{
    insertion_at_front();
    break;
    }
    case 2:{
    Insertion_at_end();
    break;
    }
    case 3:{
    insertion_at_any_position();
    break;
    }
    case 4:{
    deletion_at_front();
    break;
    }
    case 5:{
    deletion_at_end();
    break;
    }
    case 6:{
    deletion_at_any_position();
    break;
    }
    case 7:{
    display();
    break;
    }
    case 8:
    break;
    default:
    printf("invalid choice\n");
    }}
    while(ch!=8);
    }
void insertion_at_front(){
   int item;
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter the data to be added\n");
   scanf("%d",&item);
   if(temp==NULL)
   printf("no memory space\n");
   else{
   temp->data=item;
   temp->link=head;
   head=temp;
   }
   }
void Insertion_at_end(){
   int item;
   struct node *temp,*ptr;
   if(head==NULL){
      insertion_at_front();
   }
   else{
   printf("enter the data to be added\n");
   scanf("%d",&item);
   temp=(struct node*)malloc(sizeof(struct node));
   ptr=head;
   while(ptr->link!=NULL){
   ptr=ptr->link;
   }
   ptr->link=temp;
   temp->data=item;
   temp->link=NULL;
   }
}
void insertion_at_any_position(){
   int item,key;
   struct node *temp,*ptr;
   if(head==NULL){
      insertion_at_front();
   }
   else{
   printf("enter the data to be added\n");
   scanf("%d",&item);
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter the data after which value to added\n");
   scanf("%d",&key);
   ptr=head;
   while(ptr->data!=key&&ptr->link!=NULL){
   ptr=ptr->link;
   }
   if(ptr->data!=key&&ptr->link==NULL)
   printf("search fails\n");
   else{
   temp->data=item;
   temp->link=ptr->link;
   ptr->link=temp;
   }
   }
}
void deletion_at_front(){
   struct node *ptr;
   if(head==NULL)
   printf("no elements\n");
   else{
   ptr=head;
   head=ptr->link;
   printf("the data %d is deleted\n",ptr->data);
   free(ptr);
   }
   }
void deletion_at_end(){
    struct node *temp,*ptr;
    if(head==NULL){
      printf("no elements\n");
    }
    else if(head->link==NULL){
    ptr=head;
    head=NULL;
    printf("the data %d is deleted\n",ptr->data);
    free(ptr);
    }
    else {
    ptr=head;
    temp=head->link;
     while(temp->link!=NULL){
       ptr=temp;
       temp=temp->link;
   }
   ptr->link=NULL;
    printf("the data %d is deleted\n",temp->data);
    free(temp);
   }
}
void  deletion_at_any_position(){
   struct node *ptr,*temp;
   int key;
   printf("enter the data to be deleted\n");
   scanf("%d",&key);
   if(head==NULL){
   printf("no elements\n");
   }
   else if(head->link==NULL){
      deletion_at_front();
      head==NULL;
   }
   else if(head->data==key){
       deletion_at_front();
       }
   else{
   temp=head;
   ptr=temp->link;
   while(ptr->data!=key&&ptr->link!=NULL){
   temp=ptr;
   ptr=ptr->link;
   }
   if(ptr->data!=key&&ptr->link==NULL){
      printf("search fails\n");
   }
   else{
   temp->link=ptr->link;
   printf("the data %d is deleted\n",ptr->data);
   free(ptr);
   }
}
}
void display(){
   struct node *ptr;
   ptr=head;
   if(head==NULL){
      printf("no elements\n");
   }
   else{
   printf("linked list:");
   while(ptr!=NULL)
   {
   printf("%d  ",ptr->data);
   ptr=ptr->link;
   }
   printf("\n");
   }
}
   
    
    
    
    
    
    



