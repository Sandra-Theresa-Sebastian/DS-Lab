#include<stdio.h>
void main()
{
 int n ,i,x,count=0,a[100],t=0;
 t+2;
 printf("Enter the Number of Elements: ");
 scanf("%d",&n);
 t++;
 
 printf("Enter the Elements: ");
 t++;
 for (i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  t++;
 }
 printf("Enter the element to search: ");   
 t++;
 scanf("%d",&x);
 t++;
 for (i=0;i<n;i++)
 {
  if (a[i]==x)
  {
   count++;
  }
 }
 if (count>0)
 {
  printf("Item is found at %d times",count);
  t++;
 }
 else
 {
  printf("Item is not found");
  t++;
 }
 printf("\nSpace Complexity= %d",(4*4)+(4*n));
 printf("\nTime Complexity= %d",t);
}

