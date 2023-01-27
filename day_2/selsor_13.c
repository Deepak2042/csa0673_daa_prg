#include<stdio.h>

int sel_sort(int arr[],int si){
    int count=0;
    for (int i = 0; i < si; i++)
    {
        count++;
        for (int j = i+1; j < si; j++)
        {
            count++;
            if(arr[j]<arr[i]){
                count++;
                int temp=arr[j];
                count++;
                arr[j]=arr[i];
                count++;
                arr[i]=temp;
                count++;
            }
        }count++;
    }count++;

    printf("Sorted array: ");
    for (int i = 0; i < si; i++)
    {
        count++;
        printf("%d ",arr[i]);
    }
    printf("count: %d",count);
    return 0;
}

void main(){
    int size;
    printf("Enter tot element: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: ");
    for(int i=0;i<size;i++)
     scanf("%d",&arr[i]);

     sel_sort(arr,size);
}