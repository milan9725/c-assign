#include<stdio.h>

int main()
{
	int a=10,b=20;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Swap of a and b is %d and %d",a,b);
	return 0;
}
