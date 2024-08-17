#include<stdio.h>

void main()

{
 int left=0,n,x,i,mid,flag=0,time, right;
 time++;
 printf("Enter the value of n: ");
 time++;
 scanf("%d",&n);
 time++;
 int a[n];
 printf("Enter array elements: ");
 time++;
 for (i=0;i<n;i++)
 {
  time++;
  scanf("%d" ,&a[i]);
  time++;
 }
 time++;
 printf("Enter the element to search");
 time++;
 scanf("%d",&x);
 time++;
 right=n-1;
 while (left<=right)
 {
  mid=(left+right)/2;
  time++;
  time++;
  time++;
  if (x==a[mid])
  {
   printf("Element is presemt at %d",mid+1);
   time++;
   flag=1;
   time++;
   break;
  }
  else if(x>a[mid])
  { 
   left=mid+1;
   time++;
  }
  else if(x<a[mid])
  {
   right=mid-1;
   time++;
  }
 }
 time++;
 if (flag==0)
 printf("Element is not found");
 time++;
 printf("\n Space complexity=%d",28+(4*n));
 time++;
 time++;
 printf("\nTime complexity=%d",time);
}
