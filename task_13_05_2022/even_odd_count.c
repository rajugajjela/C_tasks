#include <stdio.h>
// function to count even numbers in array
void even(int array[], int size, int even_count, int i)
{
    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_count++;
        }
    }
    // printing the count of even numbers in arrat
    printf("\n Total Number of Even Numbers in this Array = %d ", even_count);
}
// function to count odd numbers in array
void odd(int array[], int size, int odd_count, int i)
{
    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    // printing the count of odd numbers in arrat
    printf("\n Total Number of Odd Numbers in this Array = %d \n", odd_count);
}
int main()
{
    int i;
    // Initialize array
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 13, 14};
    // Calculate length of array
    int size = sizeof(array) / sizeof(int);
    int even_count = 0, odd_count = 0;
    // even function calling
    even(array, size, even_count, i);
    // odd function calling
    odd(array, size, odd_count, i);
}