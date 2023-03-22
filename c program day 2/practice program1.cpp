#include<stdio.h>
#include<math.h>
main()
{
	int x,n,a,r;
	printf("Enter X value:");
	scanf("%d",&x);
	printf("Enter N value:");
	scanf("%d",&n);
	printf("Enter Choice from 1 to 5:");
	scanf("%d",&a);
	if(a==1)
	{
		r=pow(x,n);
		printf("Pow(x,n)=%d",r);
	}
	else if (a==2)
	{
		printf("Add(x,n)=%d",x+n);
	}
    else if(a==3)
	{
		printf("Sub(x,n)=%d",x-n);
	}
    else if (a==4)
	{
		printf("Mul(x,n)=%d",x*n);
	}
	else if (a==5)
	{
		printf("Div(x,n)=%d",x/n);
	}
	else
	{
		printf("Enter a Invalid choice");
	}
	
	
}
