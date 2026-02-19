#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);

    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("\nNot a valid triangle.\n");
    }
    else {
        if (side1 == side2 && side2 == side3) {
            printf("\nThe triangle is Equilateral.\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("\nThe triangle is Isosceles.\n");
        }
        else {
            printf("\nThe triangle is Scalene.\n");
        }
    }

    return 0;
}
