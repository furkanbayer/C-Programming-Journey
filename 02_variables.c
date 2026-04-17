// variables lesson
#include <stdio.h>
#include <stdbool.h>
int main() {
    int age = 18;
    int year = 2026;
    printf("your age is %d years old", age);
    printf("\nThe current year is %d", year);

    // float lesson 
float gpa = 3.5;
float price = 199.99;
float temperature = -10.5;
printf("\nYour GPA is %.1f", gpa);
printf("\nThe price of the item is $%.2f", price);
printf("\nThe temperature is %.1f°C", temperature);

      // double lesson
double pi = 3.141592653589793;
printf("\nThe value of pi is %.15lf", pi);

       // char lesson
char grade = 'A';
char currency = '$';
printf("\nYour grade is %c\n", grade);
printf("The currency symbol is %c\n", currency);

char name[] = "Furkan";
printf("Hello, %s!\n", name);

       // boolean lesson   
    bool isOnline = true;
if (isOnline) {
    printf("You are ONLINE\n");
}
else {
    printf("You are OFFLINE\n");
}

      // format specifiers lesson
      // 1- width 
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
        printf("%04d\n", num1);  // 4 digits with leading zeros
        printf("%04d\n", num2);
        printf("%04d\n", num3);
    return 0;
}
