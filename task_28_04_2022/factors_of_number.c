#include <stdio.h>
//to find the factors of number
void findFactors(int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        // printing the  factors of number
            printf("%d\t", i);
    }
}

int main()
{
    int number = 100;
// function calling
    findFactors(number);

    return 0;
}