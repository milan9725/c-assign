#include<stdio.h>

int main()
{
	int lastnum,firstnum,sum=0,num;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	lastnum= num%10;

	
	while(num>=10)
	{
		num=num/10;
		
	}
	firstnum=num;
	
	sum=firstnum+ lastnum;
	printf("The sum of first and last digit is %d",sum);
	return 0;
	
}
