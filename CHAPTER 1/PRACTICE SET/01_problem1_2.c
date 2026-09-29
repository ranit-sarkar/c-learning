/*Write a C program to calculate area of a rectangle:
  b)Using user input values.
  */

#include <stdio.h>

int main() {
   int length,width,area;
   printf("Enter length of rectangle: \n");
   scanf("%d", &length);
   printf("Enter width of rectangle: \n");
   scanf("%d", &width);
   area = length * width;
   printf("Area of rectangle: %d\n", area);
    return 0;
}