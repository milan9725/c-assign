#include<stdio.h>

  int main()
{
	int n,f=1,i;
	
	printf("enter the value:");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
	f=f*i;
}
	printf("\n factorial of %d is: %d",n,f);
return 0;
}
