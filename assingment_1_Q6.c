/*program to print second last digit of a number*/

#include<stdio.h>
int main()
{
	int num,a,b;
	printf("enter the number:\n");
	scanf("%d",&num);
	a=(num%100);
	b=(a/10);
	printf("output:%d",b);
}

