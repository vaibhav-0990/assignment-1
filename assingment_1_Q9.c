/*program to delete the second last digit-vaibhav bhaskar,11912060,IT*/

#include<stdio.h>
int main()
{
	int num,a,b,c;
	printf("Enter the number:\n");
	scanf("%d",&num);
	a=num/10;
	b=num%10;
	c=a/10;
	printf("output:%d",(c*10+b));
}


