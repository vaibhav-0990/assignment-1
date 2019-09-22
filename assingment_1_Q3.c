#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,f;
	printf("enter the value of a:\n");
	scanf("%d",&a);
	printf("enter the value of b:\n");
	scanf("%d",&b);
	printf("enter the value of c:\n");
	scanf("%d",&c);
	printf("enter p:\n");
	scanf("%d",&p);
	f=(a*(pow(p,2))+b*(p)+c);
	printf("f(p)=%d",f);

}




