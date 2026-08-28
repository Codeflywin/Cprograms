//Call the library
#include <stdio.h>

int main() {
    //Create the values to be entered by the user
    int length;
    int width;

    //Prompt the user to enter the values

    printf("Enter the first number: ");
    scanf("%d", &length);

    printf("Enter the second number: ");
    scanf("%d", &width);

//Calculate the area with a function
    int area (int length, int width);
    return length * width;

    printf("The area of the rectangle is %d\n", area);
    return 0;

}