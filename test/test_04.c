#include <stdio.h>

int main() {
    int fuel;
    float avgConsumption;
    int km;

    scanf("%d", &fuel);
    scanf("%f", &avgConsumption);
    scanf("%d", &km);

    if (fuel == 0) {
        printf("There is no fuel in the tank.\n");
        return 0;
    }

    float fuelNeeded = (float)km * (avgConsumption / 100.0);

    if (fuel > fuelNeeded) {
        printf("Perfect.\n");
    } 

    else if (fuel == fuelNeeded) {
        printf("50/50. On your own risk.\n");
    } 

    else {
        printf("There isn't enough fuel.\n");
    }

    return 0;
}
