#include <stdio.h>
int matrix[25][25], visited_cities[10], limit, cost = 0;
int tc=0;
int tsp(int c)
{
 int count, nearest_city = 999;
 int minimum = 999, temp;
 for(count = 0; count < limit; count++)
 {
    tc++;
 if((matrix[c][count] != 0) && (visited_cities[count] == 0))
 {
    tc++;
    if(matrix[c][count] < minimum)
 {
    tc++;
    minimum = matrix[count][0] + matrix[c][count];
    tc++;
 }
 temp = matrix[c][count];
 tc++;
 nearest_city = count;
 tc++;
 }
 }tc++;

 if(minimum != 999)
 {
    tc++;
    cost = cost + temp;
    tc++;
 }
 return nearest_city;
}
 
void minimum_cost(int city)
{
 int nearest_city;
 visited_cities[city] = 1;
 tc++;
 printf("%d ", city + 1);
 nearest_city = tsp(city);
 tc++;
 if(nearest_city == 999)
 {
    tc++;
    nearest_city = 0;
    tc++;
    printf("%d", nearest_city + 1);
    cost = cost + matrix[city][nearest_city];
    tc++;
    return;
 }
 tc++;
 minimum_cost(nearest_city);
}
 
int main()
{ 
 int i, j;
 printf("Enter Total Number of Cities:\t");
 scanf("%d", &limit);
 printf("\nEnter Cost Matrix\n");
 for(i = 0; i < limit; i++)
 {
    tc++;
 printf("\nEnter %d Elements in Row[%d]\n", limit, i + 1);
 for(j = 0; j < limit; j++)
 {
    tc++;
 scanf("%d", &matrix[i][j]);
 }tc++;
 tc++;
 visited_cities[i] = 0;
 }tc++;
 printf("\nEntered Cost Matrix\n");
 for(i = 0; i < limit; i++)
 {tc++;
 printf("\n");
 for(j = 0; j < limit; j++)
 {tc++;
 printf("%d ", matrix[i][j]);
 }tc++;
 }tc++;
 printf("\n\nPath:\t");
 minimum_cost(0);
 printf("\n\nMinimum Cost: \t");
 printf("%d\n", cost);
 printf("Time complexity: %d",tc);
 return 0;
}