#include<stdio.h>

int main()
{
	int r,n,sum=0;
	printf("enter the value:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
	     n=n/10;	
		}
	

	printf("number is %d",sum);
	return 0;
	
}
