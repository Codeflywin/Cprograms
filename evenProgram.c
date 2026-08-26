//Call the library
#include <stdio.h>

int main() {
    //Create the values to be entered by the user, dividend will be a constant = 2
    int dividend;


    //Prompt the user to enter the number
    printf("Enter the number you want to divide: ");
    scanf("%d", &dividend);

    //If there is no remainder then the number is even
    if (dividend % 2 == 0) {
        printf("%d is even", dividend );
    }

    //Else if there is, the number is odd
    else {
        printf("%d is odd", dividend);
    }
    return 0;
}