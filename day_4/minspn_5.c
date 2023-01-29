#include <stdio.h>
#include <limits.h>
 
#define V 6
int count=0;
 
int minKey(int key[], int mstSet[]) {
    int min = INT_MAX, min_index;
    int v;
    for (v = 0; v < V; v++){
        count++;
        if (mstSet[v] == 0 && key[v] < min){
            count++;
            min = key[v], min_index = v;
            count++;
        }
    }count++;
 
    return min_index;
}
 
int printMST(int parent[], int n, int graph[V][V]) {
    int i;
    printf("Edge   Weight\n");
    for (i = 1; i < V; i++){
        count++;
        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
    }count++;
}
 
void primMST(int graph[V][V]) {
    int parent[V]; 
    int key[V], i, v, count; 
    int mstSet[V]; 
 
    
    for (i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = 0;
 
    
    key[0] = 0; 
    parent[0] = -1; 
 

    for (count = 0; count < V - 1; count++) {
        count++;
        int u = minKey(key, mstSet);
        count++;
        mstSet[u] = 1;
        count++;

        for (v = 0; v < V; v++){
            count++;
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]){
                count++;
                parent[v] = u, key[v] = graph[u][v];
                count++;
            }
        }count++;
            
    }count++;
    printf("Time complexity: %d\n",count);
    count++;
    printMST(parent, V, graph);
     
}
 
int main() {

    int graph[V][V] = { { 0, 2, 0, 1, 4, 0 }, { 1, 0, 3, 3, 0, 7 },
            { 0, 3, 0, 5, 0, 7}, { 1, 3, 5, 0, 9, 0 }, { 4, 0, 0, 9, 0, 0 },
            { 0, 7, 8, 0, 0, 0} };
 
    primMST(graph);
    printf("Time complexity: %d",count);
    return 0;
}