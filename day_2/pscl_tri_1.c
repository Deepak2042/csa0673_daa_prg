#include<stdio.h>
int main()
{
	int i,j,n,s,c,count=0;
	printf("enter n value: ");
    count++;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        count++;
		for(s=0;s<n-i-1;s++){
            count++;
			printf("  ");
            count++;
		}count++;

		for(j=0;j<i+1;j++){
            count++;
			if(j==0){
            c=1;
            count++;
            }

			else{
            c=c*(i-j+1)/j;
            count++;
			printf("%d   ",c);
            count++;
            }
		}count++;
		printf("\n");
        count++;
	}count++;
    printf("count: %d",count);
}