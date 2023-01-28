#include<stdlib.h>
#include<stdio.h>
// Merge Function
int count=0;
int merge(int arr[], int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
count++;
int n2 = r - m;
count++;
int L[n1], R[n2];
for (i = 0; i < n1; i++){
    count++;
    L[i] = arr[l + i];
    count++;
}count++;
 
for (j = 0; j < n2; j++){
    count++;
    R[j] = arr[m + 1+ j];
    count++;
}count++;

i = 0;
count++;
j = 0;
count++;
k = l;
count++;
while (i < n1 && j < n2)
{count++;
if (L[i] <= R[j])
{count++;
arr[k] = L[i];
count++;
i++;
count++;
}
else
{count++;
arr[k] = R[j];
count++;
j++;
count++;
}
k++;
count++;
}count++;
while (i < n1)
{count++;
arr[k] = L[i];
count++;
i++;
count++;
k++;
count++;
}count++;
while (j < n2)
{count++;
arr[k] = R[j];
count++;
j++;
count++;
k++;
count++;
}count++;
return count;
}

int mergeSort(int arr[], int l, int r)
{
if (l < r)
{count++;
int m = l+(r-l)/2;
count++;
mergeSort(arr, l, m);
count++;
mergeSort(arr, m+1, r);
count++;
int res=merge(arr, l, m, r);
count++;
return res+count;
}
}

int printArray(int A[], int size)
{
int i,count=0;
printf("\n");
for (i=0; i < size; i++){
    count++;
    printf("%d ", A[i]);
}count++;

return count;
 
}

int main()
{
int arr[] = {85, 24, 63, 45, 17, 31, 96, 50};
int arr_size = sizeof(arr)/sizeof(arr[0]);
int res;
printf("\nGiven array is: ");
res+=printArray(arr, arr_size);
res+=mergeSort(arr, 0, arr_size - 1);
printf("\nSorted array is: ");
res+=printArray(arr, arr_size);
printf("\nTime Complexity: %d",res);
return 0;
}
