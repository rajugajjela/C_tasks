#include <stdio.h>
#include <stdbool.h>
// function to check given number is positive
bool is_positive(int number)
{
    if (number >= 0)
    {
        // printing the positive number
        printf("the given number is positive:%d", number);
        return true;
    }
    else
        return false;
}
// function to check given number is negative
bool is_negative(int number)
{
    if (number < 0)
    {
        // printing the negative number
        printf("the given number is negative:%d", number);
        return true;
    }
    else
        return false;
}
int main()
{
    int number = 6, i;
    // positive number function calling
    is_positive(number);
    // negative number functin calling
    is_negative(number);
}