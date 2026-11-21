#include <stdio.h>

struct Robot {
    float angle, temperature, torque;
    int status;
};

int main() {
    struct Robot r;
    FILE *fp;
    int n, i;

    fp = fopen("robot.txt", "a");

    printf("Enter number of records: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter joint angle: ");
        scanf("%f", &r.angle);

        printf("Enter motor temperature: ");
        scanf("%f", &r.temperature);

        printf("Enter torque value: ");
        scanf("%f", &r.torque);

        printf("Enter status (1=ON, 0=OFF): ");
        scanf("%d", &r.status);

        fprintf(fp, "%.2f %.2f %.2f %d\n",
                r.angle, r.temperature,
                r.torque, r.status);
    }

    fclose(fp);

    fp = fopen("robot.txt", "r");

    printf("\n--- Robot Historical Records ---\n");

    while(fscanf(fp, "%f %f %f %d",
                 &r.angle, &r.temperature,
                 &r.torque, &r.status) == 4) {

        printf("\nAngle: %.2f", r.angle);
        printf("\nTemperature: %.2f", r.temperature);
        printf("\nTorque: %.2f", r.torque);

        if(r.temperature > 80 || r.torque > 100)
            printf("\nWARNING: Abnormal Condition!");
        else
            printf("\nStatus: Normal");

        if(r.status == 0)
            printf("\nMotor is OFF");

        printf("\n");
    }

    fclose(fp);

    return 0;
}
