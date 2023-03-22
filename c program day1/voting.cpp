// write a program to print person is eligible for voting or not.
#include<stdio.h>
#include <conio.h>
main()
{
	int a;
	printf("enter your age");
	scanf("%d",&a);
	if (a>18)
{
	printf("%d is eligible for voting",a);
}
else
{
         printf("%d is not eligible for voting \n %d is left to become eligible for voting is",a,18-a);

}

}
