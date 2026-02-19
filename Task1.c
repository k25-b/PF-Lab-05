#include <stdio.h>
int scholarship, family_income;
float cgpa;
int main(void) {
    printf("Enter your family income: ");
    scanf("%d", &family_income);
    printf("Enter your CPGA: ");
    scanf("%f", &cgpa);
    if (cgpa >= 3.5) {
        if (family_income <50000) {
            scholarship = 100;
            printf("100%% scholarship");
        }
        else {
            scholarship = 50;
            printf("50%% scholarship");
        }
    }
    else if (cgpa >= 3 && family_income < 40000) {
        scholarship = 25;
        printf("25%% scholarship");
    }
    else {
        scholarship = 0;
        printf("0%% scholarship");
    }
}
