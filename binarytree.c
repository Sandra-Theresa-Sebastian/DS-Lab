#include<stdio.h>
void main()
{
	int limit,i,pos;
	printf("Enter the total number of nodes: \n");
	scanf("%d",&limit);
	int a[limit];
  	printf("Enter the nodes data: \n");
   	for(i=1;i<=limit;i++)
   	{
     		scanf("%d",&a[i]);
   	}
  	printf("Enter the position you want to check: \n");
  	scanf("%d",&pos);
   	if((pos/2)!=0)
   	{
     		printf("Parent of %d is: %d\n",a[pos],a[pos/2]);
   	}
   	else
   	{
     		printf("No parent\n");
   	}
   	if(2*pos>limit)
   	{
      		printf("No left child\n");
   	}
   	else
   	{	
     		printf("Left child of %d is: %d\n",a[pos],a[2*pos]);
   	}
   	if((2*pos)+1>limit)
   	{
     		printf("No right child\n");
     	}
   	else
   	{
   		printf("Right child of %d is: %d\n",a[pos],a[(2*pos)+1]);
   	}
}



   
