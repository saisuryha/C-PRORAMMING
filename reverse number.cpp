#include<stdio.h>

int main ()
{ 
int num, rev= 0, rem;

printf("enteran number:");
scanf("%d",&num);

while (num !=0)
{
	rem= num%10;
	rev = rev*10+rem;
	num =num/10;
}
printf("reversed number =%d",rev);
return 0;
}
