#include <stdio.h>

int main() {
    int main_category, food_choice, quantity, total_bill = 0;

    printf("Restaurant Menu:\n");
    printf("1 -> Fast Food\n");
    printf("2 -> Desi Food\n");
    printf("Select a category (1 or 2): ");
    scanf("%d", &main_category);
    
    switch (main_category) {

        case 1:
            printf("\n--- Fast Food Menu ---\n");
            printf("1 -> Burger (Rs. 500)\n");
            printf("2 -> Pizza (Rs. 1200)\n");
            printf("Select an item (1 or 2): ");
            scanf("%d", &food_choice);
            
            switch (food_choice) {
                case 1:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total_bill = 500 * quantity;
                    printf("\nYou selected %d Burger(s).\n", quantity);
                    break;
                case 2:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total_bill = 1200 * quantity;
                    printf("\nYou selected %d Pizza(s).\n", quantity);
                    break;
                default:
                    printf("Invalid item choice!\n");
                    break;
            }
            break; 

        case 2:
            printf("\n--- Desi Food Menu ---\n");
            printf("1 -> Biryani (Rs. 350)\n");
            printf("2 -> Karahi (Rs. 1500)\n");
            printf("Select an item (1 or 2): ");
            scanf("%d", &food_choice);

            switch (food_choice) {
                case 1:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total_bill = 350 * quantity;
                    printf("\nYou selected %d Biryani(s).\n", quantity);
                    break;
                case 2:
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    total_bill = 1500 * quantity;
                    printf("\nYou selected %d Karahi(s).\n", quantity);
                    break;
                default:
                    printf("Invalid item choice!\n");
                    break;
            }
            break; 

        default:
            printf("Invalid category choice! Please restart.\n");
            break;
    }

    if (total_bill > 0) {
        printf("Total Bill: Rs. %d\n", total_bill);
    }

    return 0;
}
