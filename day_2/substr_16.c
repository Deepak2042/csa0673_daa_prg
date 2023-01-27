#include<stdio.h>

void substr(char str[],char sub[],int strs,int subs){
    int pos=0,flag=0;
    if(strs<subs){
        printf("String not found..!");
    }

    if(subs<strs){
        for (int i = 0; i < strs; i++)
        {

            if(str[i]==sub[0]){
                pos=i;
                break;
            }

        }

        for (int i = pos,j=0; i < (pos+(strs-subs)); i++,j++)
        {
            if(str[i]!=sub[j]){
                flag=1;
                break;
            }
        }
        
        if(flag==0){
            printf("sub string found...!");
        }

        else{
            printf("sub string not found...!");
        }
         
    }
    
}

void main(){
    int strs=0,subs=0;
    char str[50],sub[50];
    printf("Enter the string: ");
    scanf("%s",&str);

    printf("Enter the sub_string: ");
    scanf("%s",&sub);

    while(str[strs]!='\0')
     strs++;
    
    while(sub[subs]!='\0')
     subs++;

    substr(str,sub,strs,subs);
    
}