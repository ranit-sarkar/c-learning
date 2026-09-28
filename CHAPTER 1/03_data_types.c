#include <stdio.h>

int main()
{
    // int a; // declaration of an integer variable 'a'
    // a = 10; // initialization of variable 'a' with value 10
    int a = 10; // re-declaration and initialization of variable 'a' with value 10

    // float b = 3.14; // declaration and initialization of a float variable 'b'
    float b;  // re-declaration and initialization of a float variable 'b'
    b = 3.14; // initialization of variable 'b' with value 3.14

    // char c = 'A'; // declaration and initialization of a char variable 'c'
    char c;  // re-declaration and initialization of a char variable 'c'
    c = 'A'; // initialization of variable 'c' with value 'A'


    printf("The Value of a is %d\n", a); // printing the value of variable 'a'
    printf("The Value of b is %f\n", b); // printing the value of variable 'b'
    printf("The Value of c is %c\n", c); // printing the value of variable 'c'
    return 0;
}