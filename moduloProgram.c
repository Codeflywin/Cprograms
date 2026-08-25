//Call the library
#include <stdio.h>

int main() {
//Create the values to be entered by the user, need dividend, divisor, and later quotient and also modulo
    int dividend;
    int divisor;

//Prompt the user to enter the values

    printf("Enter the number you want to divide: ");
    scanf("%d", &dividend);

    printf("Enter the number you want to divide by: ");
        scanf("%d", &divisor);

//Cannot divide by zero, catch with if statement and print error
    if (divisor == 0) {
        printf("Cannot divide by zero, restart the program and try a different number.");
    }

//Else if divisor not equal to zero process the calculations
    else {
        int quotient = dividend / divisor;
        int modulo = dividend % divisor;

//Print the results
        printf("%d / %d has a quotient of %d\n", dividend, divisor, quotient);
        printf("%d %% %d has a remainder of %d\n", dividend, divisor, modulo);
    }
        return 0;
}