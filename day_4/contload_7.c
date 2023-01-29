#include<stdio.h>
#include<stdlib.h>

int count=0;

int compare(const void *a, const void *b) {
    int *item1 = (int *)a;
    count++;
    int *item2 = (int *)b;
    count++;
    return (*item2) - (*item1);
    count++;
}

void container_loading(int items[], int n, int container_capacity) {
    int containers = 0,remaining_capacity = container_capacity;
    count++;

    qsort(items, n, sizeof(int), compare);
    count++;

    for (int i = 0; i < n; i++) {
    	count++;
        if (remaining_capacity >= items[i]) {
        	count++;
            remaining_capacity -= items[i];
            count++;
        } 
        else {
        	count++;
            containers++;
            count++;
            remaining_capacity = container_capacity - items[i];
            count++;
        }
    }count++;

    printf("Number of containers used: %d\n", containers + 1);
}

int main() {
    int items[] = {50, 100, 30, 80, 90, 200, 150, 20 };
    int n = sizeof(items) / sizeof(items[0]);
    int container_capacity = 100;
    container_loading(items, n, container_capacity);
	printf("Time complextiy: %d",count);
    return 0;
}