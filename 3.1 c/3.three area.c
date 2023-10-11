#include<stdio.h>
#include <math.h>
int main()
{
	//area of circle:
	float area,pie=3.14, r;
	
	printf("enter the value of radius:");
	scanf("%f",&r);
	
	area=pie*r*r;
	
	printf("Area is %f",area);
	
	
	//area of rectangle:
	
	int len,bre,a;
	
	printf("\nenter the length and breadth\n:");
	scanf("%d \n%d",&len,&bre);
	
	a=len*bre;
	printf("area of rectangle is %d",a);
	
	//are of triangle
	
	int b,h,t;
	
	printf("\nenter the value of height and base:");
	scanf("%d \n%d",&b,&h);
	
	t=b*h/2;
	
	printf("Area of triangle is %d",t);
return 0;
}
