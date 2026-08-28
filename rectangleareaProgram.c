//Call the library
#include <stdio.h>
//Calculate the area with a function outside of the main
    int areaCalculation (int length, int width)
    {
        return length * width;
    }

int main() {
    //Create the values to be entered by the user
    int length;
    int width;

    //Prompt the user to enter the values

    printf("Enter the first number: ");
    scanf("%d", &length);

    printf("Enter the second number: ");
    scanf("%d", &width);

//Call the function and calculate the
    int area = areaCalculation(length, width);

//Print the result
    printf("The area of the rectangle is %d\n", area);

//End program
    return 0;

}