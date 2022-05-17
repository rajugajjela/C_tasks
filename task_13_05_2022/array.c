#include <stdio.h>
// function to print array
void array_print(int array[], int size, int i)
{
    // Loop through the array by incrementing value of i
    for (i = 0; i < size; i++)
    {
        // printing thr array
        printf("%d ", array[i]);
    }
    printf("\n");
}
// function to reverse array
void reverse_array(int array[], int size, int i)
{
    for (int i = size - 1; i >= 0; i--)
        // printing reverse array
        printf("array[%d]:%d\n", i, array[i]);
}
int main()
{
    int i;
    // Initialize array
    int array[] = {1, 2, 3, 4, 5};
    // Calculate length of array
    int size = sizeof(array) / sizeof(int);
    // array function calling
    array_print(array, size, i);
    reverse_array(array, size, i);
}