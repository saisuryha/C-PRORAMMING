#include<stdio.h>
#include<conio.h>
main()
{
	int i,a,b;
	printf("Enter which table want to print:");
	scanf("%d",&a);
	printf("Enter a limit for that:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		printf("%d X %d = %d\n",i,a,a*i);
	}
}
