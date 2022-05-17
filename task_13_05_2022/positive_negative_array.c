#include <stdio.h>
// function to count positive number in array
void positive(int array[], int positive_count, int size, int i)
{
    for (i = 0; i < size; i++)
    {
        if (array[i] >= 0)
        {
            positive_count++;
        }
    }
    // printing positive number in array
    printf("\n Total Number of Positive Numbers in this Array = %d ", positive_count);
}
// function to count negative number in array
void negative(int array[], int negative_count, int size, int i)
{
    for (i = 0; i < size; i++)
    {
        if (array[i] <= 0)
        {
            negative_count++;
        }
    }
    // printing negative number in array
    printf("\n Total Number of Negative Numbers in this Array = %d\n", negative_count);
}
int main()
{
    int i;
    // Initialize array
    int array[] = {1, 2, -3, 4, 5, 6, -7, 8, -9, 10, 3, -13, 14};
    // Calculate length of array
    int size = sizeof(array) / sizeof(int);
    int positive_count = 0, negative_count = 0;
    // positive function calling
    positive(array, negative_count, size, i);
    // negative function calling
    negative(array, negative_count, size, i);
}