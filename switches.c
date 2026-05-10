#include <stdio.h>
 
int main() {
       // SWITCH STATEMENT EXAMPLE
int dayOfWeek = 8;
 printf("Enter a day of the week (1-7): ");
scanf("%d", &dayOfWeek);
  switch(dayOfWeek) {
    case 1: 
    printf("Monday\n");
    break;
    case 2:
    printf("Tuesday\n");
    break;
    case 3:
    printf("Wednesday\n");
    break;  
    case 4:
    printf("Thursday\n");
    break;
    case 5:
    printf("Friday\n");
    break;
    case 6:
    printf("Saturday\n");
    break;
    case 7:
    printf("Sunday\n");
    break;
    default: 
    printf("Invalid day of the week.\n");
  }

    return 0;
}