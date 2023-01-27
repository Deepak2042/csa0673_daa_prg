#include<stdio.h>

void main(){
    float N;
    int sum=0,c=0,count=0,val=4;
    printf("Enter the n value: ");
    scanf("%f",&N);

    if(N>=1){
     count++;
    int n=(int) N;
     count++;
    while(c<n){
        count++;
     for(int i=1;i<val;i++){
        count++;
        if(val%i==0){
         count++;
         sum+=i;
         count++;
        }
     }count++;
     if(sum==val){
         count++;
         printf("%d ",sum);
         c++;
         count++;
     }
     
     sum=0;
     count++;
     val++;
     count++;
     }count++;
    }
    else{
        count++;
        printf("Invalid input...!");
    }
    printf("\ncount: %d",count);
}