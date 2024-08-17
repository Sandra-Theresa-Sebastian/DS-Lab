#include<stdio.h>
void main()
{
	int n,i,j,a[50],small,temp,time;
	printf("Enter the size of the array: \n ");
	time++;
	scanf("%d",&n);
	time++;
	printf("Enter the elements :\n");
	time++;
	for(i=0;i<n;i++)
	{
 		time++;
 		scanf("%d",&a[i]);
 		time++;
	}
	for(i=0;i<n;i++)
	{
		time++;
		small=i;time++;
		for(j=i+1;j<n;j++)
		{
			time++;
			if (a[small]>a[j])
			{
				time++;
				small=j;
			}
		}
		if (small!=i)
		{
			time++;
			temp=a[i];time++;
			a[i]=a[small];time++;
			a[small]=temp;time++;
		}
	}
	printf("Enter the sorted elements is :\n");
	time++;
	for(i=0;i<n;i++)
	{
		time++;
		printf("%d \t",a[i]);
		time++;
	}
	printf("\nSpace Complexity= %d",(7*4)+(4*n));
	printf("\nTime Complexity= %d",time);
}




