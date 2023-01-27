#include<stdio.h>

int amg(int num){
    int rem,sum=0,count=0,n=num;
    while(num>0){
        count++;
        rem=num%10;
        count++;
        sum+=rem*rem*rem;
        count++;
        num/=10;
        count++;
    }count++;

    if(n==sum){
        count++;
        printf("Amstrong number...!");   
    }
    else{
        count++;
        printf("Not amstrong...!");
    }
    printf("count: %d",count);
    return 0;
}

void main(){
    int val;
    printf("value: ");
    scanf("%d",&val);
    amg(val);
}