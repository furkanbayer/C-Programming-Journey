#include <stdio.h>
 
 int main() {
            // TEMPERATURE CONVERSİON PROGRAM
      char choice = '\0';
      float fahrenheit = 0.0f;
      float celsius = 0.0f;

      printf("Temperature Converter Calculator\n");
      printf("1. Celsius to Fahrenheit\n");
      printf("2. Fahrenheit to Celsius\n");
      printf("Enter your choice (1 or 2): ");
      scanf(" %c", &choice);

      if (choice == '1') {
            // Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
            printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
      } 
      else if (choice == '2') {
            // Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: "); 
            scanf("%f", &fahrenheit); 
            celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
            printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
      }
      else {
            printf("Invalid choice. Please enter 1 or 2.\n");
            return 1; // Exit with an error code
      }
    return 0;
 }