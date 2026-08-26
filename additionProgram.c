//Call the library
#include <stdio.h>

int main() {
//Create the values to be entered by the user, dividend will be a constant = 2
    int val1;
    int val2;
    int sumtotal;
//Prompt the user to enter the values

    printf("Enter the first number: ");
    scanf("%d", &val1);

    printf("Enter the second number: ");
    scanf("%d", &val2);

//Need the sum of the numbers between values 1 and 2
//Determine which number is higher and loop up if higher first
    if (val1 <= val2) {
    for (int i = val1; i <= val2; i++) {

//Implement the DO loop
        sumtotal += i;
    }
//Loop down if the lower number was entered first
} else {
    for (int i = val1; i >= val2; i--) {

//Implement DO loop
        sumtotal += i;
    }
}
    printf("The sum of the numbers between %d and %d inclusive is: %d\n", val1, val2, sumtotal);
    return 0;
}