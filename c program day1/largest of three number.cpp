#include <stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter first number");
	scanf("%d",&a);
	
	printf("enter second number");
	scanf("%d",&b);
	printf("enter third number");
	scanf("%d",&c);
	if (a>b&& a>c)
{ printf("A is largest number");
	}	
	else if(b>c)
{printf("B is largest number");
	}
	else
	{printf("c is largest number");
		}	
}

