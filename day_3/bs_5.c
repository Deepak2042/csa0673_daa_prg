#include<stdio.h>
int bs(int arr[],int si,int key){
    int ll=0,ul=si-1,mid,pos=-1;
    int count=0;

    while (ll<=ul){
        count++;
        mid=(ll+ul)/2;
        count++;
        if(arr[mid]==key){
            count++;
            pos=mid;
            count++;
            count++;
            break;
        }
        else if(arr[mid]>key){
          count++;
          ul=mid-1;
          count++;
        }

        else if(arr[mid]<key){
            count++;
            ll=mid+1;
            count++;
        }
          
    }count++;
    printf("count: %d\n",count);
    return pos;
}

void main(){
    int key,size;
    printf("Enter the no. of elements wnat to enter: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: \n");
    for(int i=0;i<size;i++)
     scanf("%d",&arr[i]);

    printf("Enter the element to be found: ");
    scanf("%d",&key);

    int res=bs(arr,size,key);

    if(res>0)
      printf("%d found in position %d",key,res);
    else if(res<0)
      printf("Element not found...");
}