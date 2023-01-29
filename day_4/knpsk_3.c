#include <stdio.h>
int main()
{
    int capacity, no_items, cur_weight, item,count=0;
    int used[10];
    float total_profit;
    int i;
    int weight[10];
    int value[10];

    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);

    printf("Enter the number of items: ");
    scanf("%d", &no_items);

    printf("Enter the weight and value of %d item: \n", no_items);
    for (i = 0; i < no_items; i++)
    {
        count++;
        printf("Weight[%d]:\t", i);
        scanf("%d", &weight[i]);
        printf("Value[%d]:\t", i);
        scanf("%d", &value[i]);
    }count++;

    for (i = 0; i < no_items; ++i){
        count++;
        used[i] = 0;
    }count++;
        

    cur_weight = capacity;
    count++;
    while (cur_weight > 0)
    {
        count++;
        item = -1;
        count++;
        for (i = 0; i < no_items; ++i){
            count++;
            if ((used[i] == 0) &&((item == -1) || ((float) value[i] / weight[i] > (float) value[item] / weight[item]))){
                count++;
                item = i;
                count++;
            }
        }count++;
            

        used[item] = 1;
        count++;
        cur_weight -= weight[item];
        count++;
        total_profit += value[item];
        count++;
        if (cur_weight >= 0){
            count++;
            printf("Added object %d (%d Rs., %dKg) completely in the bag. Space left: %d.\n", item + 1, value[item], weight[item], cur_weight);
        }
            
        else
        {
            count++;
            int item_percent = (int) ((1 + (float) cur_weight / weight[item]) * 100);
            count++;
            printf("Added %d%% (%d Rs., %dKg) of object %d in the bag.\n", item_percent, value[item], weight[item], item + 1);
            total_profit -= value[item];
            count++;
            total_profit += (1 + (float)cur_weight / weight[item]) * value[item];
            count++;
        }
    }count++;

    printf("Filled the bag with objects worth %.2f Rs.\n", total_profit);
    printf("Time complexity: %d",count);
}