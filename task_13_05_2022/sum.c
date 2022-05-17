#include <stdio.h>
// function to calculate the sum of digits
void sum_of_digits(int number, int sum, int m)
{
    while (number > 0)
    {
        m = number % 10;
        sum = sum + m;
        number = number / 10;
    }
    // printing the sum of digits of given number
    printf("Sum of all digits in an integer is=%d\n", sum);
}
int main()
{
    int number = 215, sum = 0, m;
    // sum of digits function calling
    sum_of_digits(number, sum, m);
}