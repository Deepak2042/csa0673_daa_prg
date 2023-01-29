#include<stdio.h>
int seq(int arr[],int s);

int sort(int arr[],int s){

    int count=0;
    count++;
    for (int i = 0; i<=s; i++)
    {
        count++;
        for (int j = i+1; j<=s; j++)
        {
            count++;
            if(arr[i]>arr[j]){
                count++;
                int temp=arr[i];
                count++;
                arr[i]=arr[j];
                count++;
                arr[j]=temp;
                count++;
            }
        }count++;
    }count++;

    int res=seq(arr,s);

    return count+res;
    
}

int seq(int arr[],int s){
    int count=0,mid=(s-0)/2;
    count++;

    printf("pair: \n");
    for(int i=0,j=s;i<mid,j>=mid+1;i++,j--){
        count++;
        printf("%d,%d,",arr[i],arr[j]);
    }count++;

    return count;
}

void main(){
    int count=0,size,res=0;
    count++;

    printf("Enter tot element: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        count++;
        scanf("%d",&arr[i]);
    }count++;

    res=sort(arr,size-1)+count;
    printf("\nTime complexity: %d",res);
}