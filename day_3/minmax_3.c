#include<stdio.h>
#include<stdio.h>
int max, min;
int a[100],count=0;
void maxmin(int i, int j)
{
 int max1, min1, mid;
 if(i==j)
 {
 	count++;
  max = min = a[i];
  count++;
 }
 else
 {
  if(i == j-1)
  {
   if(a[i] <a[j])
   {
    max = a[j];
    count++;
    min = a[i];
    count++;
   }
   else
   {
    max = a[i];
    count++;
    min = a[j];
    count++;
   }
  }
  else
  {
   mid = (i+j)/2;
   count++;
   maxmin(i, mid);
   count++;
   max1 = max; min1 = min;
   count++;
   maxmin(mid+1, j);
   count++;
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
   }
 count++;}
}

int main ()
{
 int i, num;
 printf ("\nEnter the total number of numbers : ");
 scanf ("%d",&num);
 printf ("Enter the numbers : \n");
 for (i=1;i<=num;i++)
  scanf ("%d",&a[i]);


 max = a[0];
 count++;
 min = a[0];
 count++;
 maxmin(1, num);
 count++;
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
 printf("time complexity %d",count);
 return 0;
}
