#include<stdio.h>
#include<stdbool.h>


#define V 5
int count=0;

void printSolution(int path[]);


bool isSafe(int v, bool graph[V][V], int path[], int pos)
{

    if (graph [ path[pos-1] ][ v ] == 0){
        count++;
        return false;
    }
        


    for (int i = 0; i < pos; i++){
        count++;
        if (path[i] == v){
            count++;
            return false;
        }
            
    }count++;


    return true;
}


bool hamCycleUtil(bool graph[V][V], int path[], int pos)
{
    
    if (pos == V)
    {
        count++;

        if ( graph[ path[pos-1] ][ path[0] ] == 1 ){
            count++;
            return true;
        }
           
        else{
            count++;
            return false;
        }
          
    }


    for (int v = 1; v < V; v++)
    {
        count++;
        
        if (isSafe(v, graph, path, pos))
        {
            path[pos] = v;
            count++;


            if (hamCycleUtil (graph, path, pos+1) == true){
                count++;
                return true;
            }
                
            count++;
            path[pos] = -1;
        }
    }


    return false;
}


bool hamCycle(bool graph[V][V])
{
    
    int path[V];
    for (int i = 0; i < V; i++){
        count++;
         path[i] = -1;
         count++;
    }count++;
       

    path[0] = 0;
    count++;

    if ( hamCycleUtil(graph, path, 1) == false )
    {
        count++;
        //printf("\nSolution does not exist");
        return false;
    }

    count++;
    printSolution(path);
    return true;
}


void printSolution(int path[])
{
    printf ("Solution Exists:\n"
            " Following is one Hamiltonian Cycle \n");
    for (int i = 0; i < V; i++){
        count++;
        printf(" %d ", path[i]);
    }count++;
        

 
    printf(" %d ", path[0]);
    printf("\n");
}


int main()
{

   bool graph1[V][V] = {{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 1},
                      {0, 1, 1, 1, 0},
                     };

    // Print the solution
    hamCycle(graph1);


    bool graph2[V][V] = {{0, 1, 0, 1, 0},
                      {1, 0, 1, 1, 1},
                      {0, 1, 0, 0, 1},
                      {1, 1, 0, 0, 0},
                      {0, 1, 1, 0, 0},
                     };

    
    hamCycle(graph2);
    printf("\nTime complexity: %d",count);
    return 0;
}