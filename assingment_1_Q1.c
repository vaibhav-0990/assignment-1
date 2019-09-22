/*to read as input sides of a rectangle and prints its area-vaibhav bhaskar,11902060,IT*/

#include<stdio.h>
int main()
{
	int length,breadth,area;
	printf("Enter the length:\n");
	scanf("%d",&length);
	printf("Enter the breadth:\n");
	scanf("%d",&breadth);
	area=length*breadth;
	printf("area of rectangle:%dsq.unit",area);
}
