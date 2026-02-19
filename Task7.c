#include <stdio.h>

int main() {
    int username_id, password, otp;

    printf("Enter Username ID: ");
    scanf("%d", &username_id);

    if (username_id == 1001 || username_id == 1002) {

        printf("Enter Password: ");
        scanf("%d", &password);

        if (password == 12345) {

            printf("Enter OTP: ");
            scanf("%d", &otp);

            if (otp == 7890) {
                printf("\nLogin Successful\n");
            }
            else {
                printf("\nInvalid OTP\n");
            }
        }
        else {
            printf("\nIncorrect Password\n");
        }
    }
    else {
        printf("\nInvalid Username\n");
    }

    return 0;
}
