#include <stdio.h>
// function to calculate the factorial of given number
int factorial(int number)
{
    int i, f = 1;
    for (i = 1; i <= number; i++)
    {
        //calculating the factorial of given number
        f = f * i;
    }
    return f;
}
// function to calculate the permutations
void permutations(int number, int npr, int r)
{
    // calculating permutation
    npr = factorial(number) / factorial(number - r);
    // printing the permutation
    printf("permutation Value of %dP%d = %d\n", number, r, npr);
}
// function to calculate the combination
void combinations(int ncr, int number, int r)
{
    // calculating combinations
    ncr = factorial(number) / (factorial(r) * factorial(number - r));
    // printing the combinations
    printf("combination Value of %dC%d = %d\n", number, r, ncr);
}
void main()
{
    int number = 5, r = 3, npr, ncr;
    // factorial function calling
    factorial(number);
    // permutation function calling
    permutations(number, npr, r);
    // combination function calling
    combinations(ncr, number, r);
}
