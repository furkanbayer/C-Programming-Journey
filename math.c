    // arithmetic operators lesson
#include <stdio.h>
int main() {
    int a = 10;
    int b = 5;

    // addition
    int sum = a + b;   // sum = toplam
    printf("Sum: %d\n", sum);

    // subtraction
    int difference = a - b;
    printf("Difference: %d\n", difference);

    // multiplication
    int product = a * b;    // product = çarpım
    printf("Product: %d\n", product);

    // division
    int quotient = a / b;   // quotient = bölüm
    printf("Quotient: %d\n", quotient);

    // modulus
    int remainder = a % b;
    printf("Remainder: %d\n", remainder);

    // finding even or odd number
    int jerseyNumber = 17;
    if(jerseyNumber % 2 == 0) {
        printf("The jersey number %d is even.\n", jerseyNumber);
    }else {
        printf("The jersey number %d is odd.\n", jerseyNumber);
    }
    
    // augmented assignment operators
    int x = 10;

    // x = x + 2; Instead of writing this:
    x += 2; // x Now the number is 12

    // x = x - 3; Instead of writing this:
    x -= 3; // x Now the number is 9

    // x = x * 4; Instead of writing this:
    x *= 4; // x Now the number is 36

    // x = x / 6; Instead of writing this:
    x /= 6; // x Now the number is 6

    // x = x % 2; Instead of writing this:
    x %= 2; // x Now the number is 0
    return 0;
}