#include <stdio.h>

int main() {

      int age = 0;
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age >= 65) {
            printf("You are a senior.\n");
        }
        else if (age >= 18) {
            printf("You are an adult.\n");
        }
        else if (age == 0) {
            printf("You are a newborn.\n");
        }
        else if (age < 0) {
            printf("Invalid age entered.\n");
        }
        else {
            printf ("You are a child.\n");
        }

    return 0;
}



// BOOLEANS 
//#include <stdio.h>
//#include <stdbool.h>

//int main() {
//   bool isStudent = true; 

//   if(isStudent == true) {
//       printf("You are a student.\n");
// }
//  else { 
//      printf("You are not a student.\n");
//  }


//return 0;
// }