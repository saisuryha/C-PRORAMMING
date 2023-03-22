#include<stdio.h>
#include<conio.h>
void main()
{
	int const a=5;
	int const *p=&a;
	printf("%d",+(*p));
}

