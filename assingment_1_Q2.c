/*program which reads two numbers and prints the sum of square of the first and cube of the 
 * second*/

#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,output;
	printf("enter the first number:\n");
	scanf("%d",&num1);
	printf("enter the second number:\n");
	scanf("%d",&num2);
	num1=pow(num1,2);
	num2=pow(num2,3);
	output=num1+num2;
	printf("%d+%d=%d",num1,num2,output);
}



