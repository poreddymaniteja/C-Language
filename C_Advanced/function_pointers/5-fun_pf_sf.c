/*5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

Try it again using alias name and array of function pointers.
*/

#include<stdio.h>

int main()
{
    int a, b;
    
    // Function pointer for scanf
    int (*pt)(const char *, ...) = scanf;
    pt("%d", &a);  // Using the function pointer to take input

    // Function pointer for printf
    int (*p)(const char *, ...) = printf;
    p("%d", a);  // Using the function pointer to print the value of 'a'

    return 0;
}
