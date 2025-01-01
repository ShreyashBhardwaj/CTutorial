#include <stdio.h>

int main()
{
    int length = 0;    // Declare the variable length
    int width = 0;     // Declare the variable width
    int perimeter = 0; // Declare the variable perimeter
    /*Below code takes the length and width of the user*/
    printf("Enter the length of the Rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the Rectangle: ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);                         // Formula for calculating the perimeter of the rectangle
    printf("Perimeter of the Rectangle is %d\n ", perimeter); // Prints the perimeter of the rectangle
    return 0;
}