#include <stdio.h>
int unit, rate;
char customer_type;
float cgpa;
int main() {
    printf("Enter the amount of units used: ");
    scanf("%d", &unit);
    if (unit <= 100) {
        rate = 10;
        printf("Rate: 10");
    }
    else if (unit >100 && unit <= 300) {
        printf("What type of customer are you? ");
        scanf(" %c", &customer_type);
        if (customer_type == 'D') {
            rate = 12;
            printf("Rate: 12");
        }
        else if (customer_type == 'C') {
            rate = 15;
            printf("Rate: 15");
        }
    }
    else {
        rate = 20;
        printf("Rate: 20");
    }
}
