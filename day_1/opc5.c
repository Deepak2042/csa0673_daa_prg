#include<stdio.h>

void reverse(int n){
    int rev=0,remainder;
    int count=0;
    count++;

    while(n!=0){
        count++;
        remainder=n%10;
        count++;
        rev+=remainder;
        count++;
        n/=10;
        count++;
    }count++;
    count++;
    printf("%d",count);
}

void main(){
    int val;
    printf("Enter the value: ");
    scanf("%d",&val);
    reverse(val);
}