#include <stdio.h>

int main(){
    int num,q,sum=0,i;

    printf("Input a number: ");
    scanf("%d",&num);

   while(num!=0)
   {
   
   	q= num%10;
   	sum= sum *10+q;
   		num = num/10;
   }
   
printf("The number in reverse order is : %d \n",sum);
}
