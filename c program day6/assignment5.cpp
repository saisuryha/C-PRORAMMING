#include<stdio.h>
 main()
{
	int a[100],n,count=0,i;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("Enter the array element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("Number of Negative elements in array=%d",count);
}
