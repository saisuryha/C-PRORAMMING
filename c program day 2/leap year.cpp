#include<stdio.h>
main()
{
	int a;
	printf("enter year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("entered year  is leap year");
		printf("\n %d is next leapyear after%d is ",a+4,a);
	}
	else if(a%4==1)
	{
		printf("entered year  is not aleap year");
		printf("\n %d is previous  leap year before %d is ",a-1,a);
	}
	else if(a%4==2)
	{
		printf("entered year is not aleap year");
		printf("\n %d is previous  leap year before %d is ",a-2,a);
	}else if(a%4==3)
	{
		printf("entered year is not aleap year");
		printf("\n %d is previous  leap year before %d is ",a-3,a);
	}
	else
	{
		printf("entered year is not aleap year");
		printf("\n %d is previous  leap year before %d is ",a-4,a);
	}
}

