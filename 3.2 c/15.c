#include<stdio.h>

int main()
{
	int num,i,max=0;
	
		printf("enter the number:");
	    scanf("%d",&num);
	
while(num!=0)
{
	if(num % 10 > max)
	{
		max=num%10;
	}
	num=num/10;
}
	
	printf("max number is :%d",max);
	return 0;
	
}





