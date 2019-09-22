/*program to double the last digit of a given number*/

#include<stdio.h>
int main()
{
	int num,a,b;
	printf("Enter the number:\n");                                                    
	scanf("%d",&num);                                                                             a=(num/10);               
	b=2*(num%10);
	printf("output;%d",((10*a)+b));

	
}

