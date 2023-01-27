#include<stdio.h>

void function(int n){
    int count=0;
    int c=0;
    count++;
    for(int i=n/2;i<n;i++){
        count++;
        for(int j=1;j<n;j=2*j){
            count++;
            for(int k=1;k<n;k=k*2){
                count++;
                c++;
                count++;
            }count++;
        }count++;
    }count++;
    printf("%d",count);
}

void main(){
    int val;
    printf("Enter the value: ");
    scanf("%d",&val);
    function(val);
}