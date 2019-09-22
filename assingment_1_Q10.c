/*program to exchange last two digits-vaibhav bhaskar,11902060,IT*/

#include<stdio.h>
int main()
{
	int num,a,b,c,d;
	printf("Enter the number:\n");
	scanf("%d",&num);
	a=num/100;
	b=num%10;
	c=num%100;
	d=c/10;
	printf("output:%d",((a*100)+(b*10)+d));



}
