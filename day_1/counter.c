#include <stdio.h> 
void func(int min); 
int main()
{
int n=0; 
printf("Enter the value: ");
scanf("%d",&n); 
func(n); 
return 0;
}

void func(int n){
int count=0; 
int i=1,s=1; 
count++; 
count++; 
while(s<=n){
 count++;
 i++;
 count++; 
 s+=i; 
 count++;
}

count++;
printf("after iteration: %d",count);
}
