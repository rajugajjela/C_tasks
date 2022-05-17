#include <stdio.h>
// Function to find the absolute value
void absolute(int number)
{
    // If the number is less than
    // zero, then multiply by (-1)
    if (number < 0)
    {
        number = (-1) * number;
        printf("%d\n", number);
    }
    else
        // Print the absolute value
        printf("%d ", number);
}
int main()
{
    int number = -12;
    // Function call
    absolute(number);
    return 0;
}
