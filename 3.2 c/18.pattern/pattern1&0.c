#include<stdio.h>

int main()
{
	int i,j;
    int rows=5;
	
	for(i=0;i<rows;i++)
	{
	

for(j=0; j<=i; j++)
{
	     if(j % 2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
	
}


printf("\n");
}
return 0;
}
