#include<stdio.h>

int main()
{
	float P,R,T, SI;
	
	printf("enter the value of P");
	scanf("%f", &P);
	
		printf("enter the value of R");
	scanf("%f", &R);
	
		printf("enter the value of T");
	scanf("%f", &T);
	
	SI= (P *R *T) / 100;
	printf("simple interest is %f", SI);
}
