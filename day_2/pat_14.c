#include<stdio.h>

void pattern(int lim){
    int count=0;
    for (int i = 1; i <= lim; i++)
    {count++;
        for (int  k = 0; k <=lim-i; k++)
        {
            count++;
            printf(" ");
        }count++;
        
        for (int j = 1; j <=i; j++)
        {
            count++;
            printf("%d ",j);
        }count++;

        printf("\n");
    }count++;
    printf("count: %d",count);   
}

void main(){
    int limit;
    printf("Enter the n value: ");
    scanf("%d",&limit);

    pattern(limit);
}