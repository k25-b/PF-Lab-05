#include <stdio.h>
int hours, rate, total;
char vehicle_type;
int main() {
    printf("Type of the vehicle: ");
    scanf("%c", &vehicle_type);
    switch (vehicle_type) {
        case 'C':
            printf("Regular parking: 50rs/hr\nVIP Parking: 100rs/hr\n");
            printf("What parking do you want? ");
            scanf("%d", &rate);
            printf("How many hours do you want to park for? ");
            scanf("%d", &hours);
            break;
        case 'b':
            printf("Regular parking: 20rs/hr\nPremium: 40rs/hr\n");
            printf("What parking do you want? ");
            scanf("%d", &rate);
            printf("How many hours do you want to park for? ");
            scanf("%d", &hours);
            break;
        case 'B':
            printf("200rs/hr\n");
            printf("How many hours do you want to park for? ");
            scanf("%d", &hours);


    }
    total = hours * rate;
    printf("Bill: %d", total);
}
