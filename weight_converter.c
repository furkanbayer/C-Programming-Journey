#include <stdio.h>

int main() {

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

     printf("Weight Converter Calculator\n");
     printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

     if (choice == 1) {
          // Kilograms to Pounds
            printf("Enter weight in Kilograms: ");
            scanf("%f", &kilograms);
            pounds = kilograms * 2.20462f;
            printf("%.2f Kilograms is equal to %.2f Pounds.\n", kilograms, pounds);
     }
        else if (choice == 2) {
          // Pounds to Kilograms
            printf("Enter weight in Pounds: ");
            scanf("%f", &pounds);
            kilograms = pounds / 2.20462f;
            printf("%.2f Pounds is equal to %.2f Kilograms.\n", pounds, kilograms);
        }
        else {
            printf("Invalid choice. Please enter 1 or 2.\n");
            return 1; // Exit with an error code
        }

    return 0;
}