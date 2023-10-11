#include<stdio.h>

int main()
{
	int i,n,odd=0;
	
	printf("enter a value for n:");
	scanf("%d",&n);
	
	
	for(i=1; i<=n; i++)
{
	
	if( i % 2 != 0 )
	{
		printf("\n %d",i);
		odd = odd + i;
	}

}
printf("\n odd=%d",odd);
	



}
