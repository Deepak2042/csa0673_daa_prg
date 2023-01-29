
#include <stdio.h>


#define V 4


#define INF 99999

int count=0;

void printSolution(int dist[][V]);


void floydWarshall(int dist[][V])
{
int i, j, k;
	for (k = 0; k < V; k++) {
	count++;
		for (i = 0; i < V; i++) {
			count++;
			for (j = 0; j < V; j++) {
				count++;
				if (dist[i][k] + dist[k][j] < dist[i][j]){
					count++;
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}count++;
		}count++;
	}count++;
	
	printSolution(dist);
	count++;
}

void printSolution(int dist[][V])
{
	printf(
		"The following matrix shows the shortest distances"
		" between every pair of vertices \n");
	for (int i = 0; i < V; i++) {
		count++;
		for (int j = 0; j < V; j++) {
			count++;
			if (dist[i][j] == INF){
				count++;
				printf("%7s", "INF");
			}
				
			else{
				count++;
				printf("%7d", dist[i][j]);
			}
		}count++;
		printf("\n");
	}count++;
}

// driver's code
int main()
{

	int graph[V][V] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };

	floydWarshall(graph);
	printf("Time complexity: %d",count);
	return 0;
}
