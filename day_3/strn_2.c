#include<stdio.h>
int main()
{
	int a[2][2], b[2][2], c[2][2], i, j;
	int m1, m2, m3, m4 , m5, m6, m7;
	int count=0;
	count++;
	printf("Enter the 4 elements of first matrix: ");
	  for(i = 0;i < 2; i++)
	  {
	  	count++;
	  	for(j = 0;j < 2; j++){
	  		   count++;
	           scanf("%d", &a[i][j]);
	       }count++;
      }count++;
	 
	printf("Enter the 4 elements of second matrix: ");
	  for(i = 0; i < 2; i++){
	  	  count++;
	      for(j = 0;j < 2; j++){
	      	   count++;
	           scanf("%d", &b[i][j]);
	       }
	   }
	   count++;
	 
	  printf("\nThe first matrix is\n");
  for(i = 0; i < 2; i++){
  	      count++;
	      printf("\n");
	      for(j = 0; j < 2; j++){
	      	   count++;
	           printf("%d\t", a[i][j]);
	    }count++;
	  }count++;
	 
    printf("\nThe second matrix is\n");
	  for(i = 0;i < 2; i++){
	  	  count++;
	      printf("\n");
	      for(j = 0;j < 2; j++){
	       count++;
           printf("%d\t", b[i][j]);
       }count++;
  }count++;
  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
  count++;
  m2= (a[1][0] + a[1][1]) * b[0][0];
  count++;
  m3= a[0][0] * (b[0][1] - b[1][1]);
  count++;
  m4= a[1][1] * (b[1][0] - b[0][0]);
  count++;
  m5= (a[0][0] + a[0][1]) * b[1][1];
  count++;
  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
  count++;
  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
  count++;
	 
  c[0][0] = m1 + m4- m5 + m7;
  count++;
  c[0][1] = m3 + m5;
  count++;
  c[1][0] = m2 + m4;
  count++;
  c[1][1] = m1 - m2 + m3 + m6;
  count++;
	 
	   printf("\nAfter multiplication using Strassen's algorithm \n");
	   for(i = 0; i < 2 ; i++){
	   	  count++;
	      printf("\n");
      for(j = 0;j < 2; j++){
      	       count++;
	           printf("%d\t", c[i][j]);
	       }count++;
   }count++;

   printf("count: %d",count);
     return 0;
}