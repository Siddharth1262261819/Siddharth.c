#include <stdio.h>

struct Robot
{
    int id;
    char type[30];
    float capacity, load, time;
};

int main()
{
    int n, i;
    struct Robot r[10];

    printf("Enter number of robots: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for robot %d:\n", i + 1);
        
        printf("Robot ID: ");
        scanf("%d", &r[i].id);

        printf("Robot type: ");
        scanf("%s", r[i].type);

        printf("Payload Capacity (kg): ");
        scanf("%f", &r[i].capacity);

        printf("Actual load (kg): ");
        scanf("%f", &r[i].load);

        printf("Operating time (hours): ");
        scanf("%f", &r[i].time);
    }

    printf("\n");
    printf("ID\tType\tCapacity\tLoad\tTime\tUtil\tStatus\n");

    for (i = 0; i < n; i++)
    {
        float util = (r[i].load / r[i].capacity) * 100;
        
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t", 
               r[i].id, r[i].type, r[i].capacity, r[i].load, r[i].time, util);

        if (r[i].load > r[i].capacity)
        {
            printf("Overloaded\n");
        }
        else
        {
            printf("Within limit\n");
        }
    }

    return 0;
}
