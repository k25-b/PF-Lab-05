#include <stdio.h>
#include <math.h> // Required for sqrt, pow, log10, sin, cos, tan, fabs

int main() {
    int choice;
    double num1, num2, result;

    printf("--- Advanced Scientific Calculator ---\n");
    printf("1 -> Addition\n2 -> Subtraction\n3 -> Multiplication\n4 -> Division\n");
    printf("5 -> Square Root\n6 -> Power (x^y)\n7 -> Logarithm (log base 10)\n");
    printf("8 -> Absolute Value\n9 -> Sine (sin)\n10 -> Cosine (cos)\n11 -> Tangent (tan)\n");
    printf("Select an operation (1-11): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers to add: \n");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers to subtract: \n");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers to multiply: \n");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case 4:
            printf("Enter numerator and denominator: \n");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2lf\n", num1 / num2);
            }
            break;

        case 5:
            printf("Enter a number: \n");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Error: Square root of a negative number is not allowed.\n");
            } else {
                printf("Result: %.4lf\n", sqrt(num1));
            }
            break;
        case 6:
            printf("Enter base and exponent: \n");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.4lf\n", pow(num1, num2));
            break;
        case 7:
            printf("Enter a number: \n");
            scanf("%lf", &num1);
            if (num1 <= 0) {
                printf("Error: Logarithm of zero or negative number is not allowed.\n");
            } else {
                printf("Result: %.4lf\n", log10(num1));
            }
            break;
        case 8:
            printf("Enter a number: \n");
            scanf("%lf", &num1);
            printf("Result: %.4lf\n", fabs(num1));
            break;
        case 9:
            printf("Enter angle in radians: \n");
            scanf("%lf", &num1);
            printf("Result: %.4lf\n", sin(num1));
            break;
        case 10:
            printf("Enter angle in radians: \n");
            scanf("%lf", &num1);
            printf("Result: %.4lf\n", cos(num1));
            break;
        case 11:
            printf("Enter angle in radians: \n");
            scanf("%lf", &num1);
            printf("Result: %.4lf\n", tan(num1));
            break;

        default:
            printf("Invalid operation choice!\n");
            break;
    }

    return 0;
}
