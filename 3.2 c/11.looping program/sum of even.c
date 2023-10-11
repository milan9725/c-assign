#include<stdio.h>

int main()
{
	int i,sum,n,e=0;
	
	printf("enter a value for n:");
	scanf("%d",&n);
	
	
	for(i=1; i<=n; i++)
{
	
	if( i % 2 == 0 )
	{
		printf("\n %d",i);
		e = e+i;
	}

}
printf("\n e=%d",e);
	



}
