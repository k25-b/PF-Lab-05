#include <stdio.h>
int unit, rate;
char vehicle_type;
int main() {
    printf("Type of the vehicle: ");
    scanf("%c", &vehicle_type);
    switch (vehicle_type) {
        case 'C':
            printf("Regular parking: 50rs/hr\nVIP Parking: 100rs/hr");
            break;
        case 'b':
            printf("Regular parking: 20rs/hr\nPremium: 40rs/hr");
            break;
        case 'B':
            printf("200rs/hr");


    }
}
