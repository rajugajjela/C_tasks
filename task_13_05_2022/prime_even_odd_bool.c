#include <stdio.h>
#include <stdbool.h>
//function to check given number is prime or not
bool is_prime_number(int number, int i, int count)
{
    if (number == 0)
        return false;
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        // printing the ginven number is prime
        printf("\n%d is a Prime number\n", number);
    }
    else
    {
        // printing the given number is not prime
        printf("\n%d is not a Prime number\n", number);
    }
    return true;
}
bool is_even_odd(int number)
{
    if (number % 2 == 0)
    {
        // printing the given number is even
        printf("the given number is even:%d", number);
        return true;
    }
    else
        // printing the given number is odd
        printf("the given number is odd\n");
    return false;
}
int main()
{
    int number = 5, i, count = 0;
    // prime function calling
    is_prime_number(number, i, count);
    // even and odd function calling
    is_even_odd(number);
}
