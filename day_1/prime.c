#include<stdio.h>

void main(){
    int num,count=0,flag=0;

    printf("Enter a value: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(num%i==0)
         count++;
         if (count>2){
          flag=1;
          break;
         }

    }

    if(flag==1)
     printf("Not prime number...");
    else if (flag==0)
     printf("prime number...");

}