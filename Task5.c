#include <stdio.h>

int main() {
    int service_years;
    float salary, bonus;

    printf("Enter your base salary: ");
    scanf("%f", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &service_years);

    bonus = (service_years > 10) ? (0.30 * salary) : ((service_years > 5) ? (0.20 * salary) : (0.10 * salary));

    printf("Your bonus amount is: Rs. %.2f\n", bonus);

    return 0;
}
