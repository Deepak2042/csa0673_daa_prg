#include<stdio.h>

int fab(int n){
    int n1=0,n2=1,n3,c=0,sum=0,ini=0;
    int count=0;
    printf("%d %d ",n1,n2);
    while(c<n){
        count++;
        n3=n1+n2;
        count++;
        printf("%d ",n3);
        if(ini%2==0){
            count++;
            sum+=n3;
            count++;
            c++;
            count++;
        }
        ini++;
        count++;
        n1=n2;
        count++;
        n2=n3;
        count++;
    }count++;
    printf("\nsum: %d\n",sum);
    printf("count: %d",count);
    return 0;
}

void main(){
int n;
printf("Enter the n value: ");
scanf("%d",&n);

fab(n);
}