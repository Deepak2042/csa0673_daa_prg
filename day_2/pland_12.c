
#include<stdio.h>

void main(){
    char val[25];
    int c=0;

    printf("enter the value: ");
    scanf("%s",&val);

    int count=0;
    
    while (val[count]!='\0'){
        c++;
        count++;
        c++;
    }c++;

    int new_count=0;

     for(int i=0,j=count-1;i<count,j>=0;i++,j--){
        c++;
        if(val[i]==val[j]){
            c++;
            new_count++;
        }
     }c++;


    if(new_count==count){
        printf("palindrome...");
        c++;
    }
     
    else{
        printf("not palindrome...");
        c++;
    }
     
     printf("\ncount: %d",c);
}