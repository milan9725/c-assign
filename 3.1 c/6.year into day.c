#include <stdio.h>

int main()
{
	//year into day:
	int year,day;
	printf("enter the year:");
	scanf("%d",&year);
	
	 day= year *365;
	 
	printf("number of days is %d",day);
	
	//days into year:
	int days,years;
	
	printf("\nenter the days:");
	scanf("%d",&days);
	
	years= days / 365;
	
	printf("number of years is %d", years);
	
	
}
