#include <stdio.h>
// function to calculate factorial of number
int factorial(int number)
{
    int i, fact = 1;
    for (i = 1; i <= number; i++)
    {
        // calculating factorial of number
        fact = fact * i;
    }
    return fact;
}

void main()
{
    int number = 5, output;
    // function calling by using  variable
    output = factorial(number);
    // printing the factorial of the given number
    printf("Factorial of the num(%d) = %d\n", number, output);
}
