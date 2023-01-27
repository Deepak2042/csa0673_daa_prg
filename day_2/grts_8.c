#include<stdio.h>
int grtst(int arr[],int si){
    int max=0,count=0,cmp=0;
    for (int  i = 0; i < si; i++){
        count++;
        cmp++;
        if(max<arr[i]){
            count++;
           max=arr[i];
           count++;
        }
    }count++;

    printf("greatest element in array: %d\n",max);
    printf("count: %d\n",count);
    printf("comparision: %d\n",cmp);
    return 0;
}

void main(){
    int size;
    printf("Enter tot element: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);

    grtst(arr,size);
    
}