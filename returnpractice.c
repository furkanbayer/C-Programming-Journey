#include <stdio.h>
#include <string.h>

int square(int num) {
    int result = num * num;
    return result;
}

int main() {
    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);


        return 0;
}

/*
    // DOUBLE CUBE EXAMPLE (Stored as a note)
    
    double cube(double x) {
        return x * x * x;
    }
    // In main function
    double result = cube(3.0);
    printf("%f", result);
*/