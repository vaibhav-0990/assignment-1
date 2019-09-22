/*program to find the sum of last two digits of a number*/

#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("enter the number:\n");
	scanf("%d",&num);
	a=(num%100);
	b=(a/10);
	c=(a%10);
	printf("output:%d",(b+c));
}

