#include<stdio.h>

void main(){
    int ele,count=0;

    printf("Enter tot element: ");
    scanf("%d",&ele);

    int arr[ele];
    printf("Enter the elements: ");

    for (int i = 0; i < ele; i++){
        count++;
        scanf("%d",&arr[i]);
    }count++;
        

    for (int i = 0; i < ele; i++)
    {count++;
        for (int j =i+1; j < ele; j++)
        {count++;
         if (arr[i]>arr[j])
         {
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
    
    printf("sorted array: ");
    for (int i = 0; i < ele; i++)
    {count++;
        count++;
        printf("%d  ",arr[i]);
    }count++;
    printf("count: %d",count);
}