#include<stdio.h>

int facto(int val){
    int count=0,fact=1;
    if(val>0){
        count++;
        count++;
        fact*=facto(val-1)*val;
    }
    else{
     count++;
     printf("count: %d\n",count);
     return fact;
    }

}

void main(){
    int num;
    printf("Enter the value: ");
    scanf("%d",&num);
    int res=facto(num);
    printf("factorial: %d",res);
}