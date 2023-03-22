#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	int arr[2][2]={10,20,30,40};
	for (i=0;i<2;i++)
	{
	for(j=0;j<2;j++)
	{
		printf("the list of array[%d][%d]is%d \n ",i,j,arr[i][j]);
	}
	}
}
