#include<stdio.h>

void main(){
    int ele,key,flag=0,pos,count=0;
    printf("Enter tot element: ");
    scanf("%d",&ele);
    
    int arr[ele];
    printf("Enter the elements: ");
    
    for(int i=0;i<ele;i++){
        count++;
        scanf("%d",&arr[i]);
    }count++;

    printf("Entre the search elements: ");
    scanf("%d",&key);

    for (int i = 0; i < ele; i++)
    {
        count++;
        if(key==arr[i]){
            count++;
            flag=1;
            count++;
            pos=i;
            count++;
            count++;
            break;
        }
        else{
         count++;
         flag=0;
         count++;
        }

    }count++;

    if(flag==1){
        count++;
        printf("Element found @ pos: %d",pos);
    }
    else{
        count++;
        printf("Element not found...!");
    }

}