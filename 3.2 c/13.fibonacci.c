#include<stdio.h>

main()

{
	int i,j, m=0,n=1,newterm;
	
	
	
	printf("enter the fibonacci series\n: ");
	scanf("%d",&j);
	
	printf("fibonacci series : \n%d \n%d", m,n);
	
	
	
	for(i=3; i<=j; i++)
	{
		newterm =m + n;	
		printf("\n%d",newterm);
	
	m=n;
	n=newterm;
	newterm =m+n;	
	}
	
	return 0;
}
