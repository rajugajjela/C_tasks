#include <stdio.h>
int count_primes(int array[], int size)
{
    int count = 0;
    int i, n;
    for (n = 0; n < size; n++)
    {
        for (i = 2; i <= n; i++)
        {
            if (array[n] % i != 0)
            {
                count++;
            }
        }
        printf("there are %d Primenumbers in the Array.\n", count);
    }
    // return primeindex;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12};
    int size = sizeof(array) / sizeof(int);
    // int count =
    count_primes(array, size);
    // printf("there are %d Primenumbers in the Array.\n", count);
}
