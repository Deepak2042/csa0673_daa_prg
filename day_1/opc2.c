#include<stdio.h>

void func(int n);

int main(){
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}

void func(int n){
    int count=0;
    if (n==1){
        count++;
        count++;
    }

    else{
        count++;
        for(int i=1;i<=n;i++){
            count++;
            for(int j=1;j<=n;j++){
                count++;
                count++;
                count++;
                count++;
                break;
            }
        }
         count++;
    }
    printf("%d",count);
}