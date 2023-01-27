#include<stdio.h>

int factor(int n);

int count=0;

int main(){
    int n;
    scanf("%d",&n);
    factor(n);
    printf("%d",count);
    return 0;
}

int factor(int n){
    int i;
    count++;
    for(int i=1;i<=n;++i)
    {
        count++;
        if(n%i==0){
            //print
        }count++;
    }
    count++;
    return 0;
}