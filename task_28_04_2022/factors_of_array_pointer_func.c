#include <stdio.h>
// to print the factors of elements in array
void factors(int *array, int size, int *ptr)
{
    for (int i = 0; i < size; i++)
    {
        int number = ptr[i];
        printf("Factors of array[%d] are :%d\n", i, ptr[i]);
        for (int j = 1; j <= number; j++)
        {
            if (number % j == 0)
            {
                // printing factors of elements in array
                printf("%d, ", j);
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr;
    int size = sizeof(array) / sizeof(int);
    ptr = array;
    // function calling
    factors(array, size, ptr);
}