#include<stdio.h>

void main(){
    
   int num=0,n=0;
   printf("Enter the value: ");
   scanf("%d",&num);
   n=num;
   int rem=0,sum=0;
   while(num>0){
    rem=num%10;
    sum+=rem*rem*rem;
    num/=10;
   }

   if (n==sum)
    printf("Number is an Amstrong...");
   else
    printf("Not an Amstrong number....");
}