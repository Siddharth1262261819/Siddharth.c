#include <stdio.h>

#define safe_distance 20

int findNearest(int *dist, int n) {
    int min = *dist;
    for (int i = 1; i < n; i++) {
        if (*(dist + i) < min) {
            min = *(dist + i);
        }
    }
    return min;
}

int main() {
    int n, dist[100], min_distance;
    printf("enter the Number of sensors: ");
    scanf("%d", &n);
    printf("enter the number of readings:\n");

    printf("Enter The distance Readings:\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: ", i + 1);
        scanf("%d", &dist[i]);
    }
    min_distance = findNearest(dist, n);

    printf("\nNearest obstacle distance:%d\n", min_distance);
    if (min_distance < safe_distance) {
        printf("Warning:Obstacle is close\n");
    } else {
        printf("Path is clear\n");
    }
    return 0;
}
