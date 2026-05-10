#include <stdio.h>
#include <stdbool.h>
int main() {
    // NESTED IF STATEMENT EXAMPLE

    float price = 10.00;
    bool isStudent = true;   // %10 discount for students
    bool isSenior = true;     // %20 discount for seniors

// student = $9
// senior = $8
// student and senior = $7

    if(isStudent) {
             if(isSenior) {
            printf("You get a senior discount of 20%%.\n");
            printf("You get a student discount of 10%%.\n");
            price *= 0.7; // Apply an additional 20% discount
        }
        else{
            printf("You get a student discount of 10%%.\n");
            price *= 0.9; // Apply a 10% discount
        }
    }
    else{
        if(isSenior) {
            printf("You get a senior discount of 20%%.\n");
            price *= 0.8; // Apply a 20% discount
        }
    }
printf("The price of a ticket is: $%.2f\n", price);



    return 0;
}