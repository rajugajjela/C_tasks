#include <stdio.h>
// function to arrange the elements in ascending order
void ascending(int array[], int i, int j, int temp, int size)
{
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        // printing elements in ascending order
        printf("after sort into ascending order array[%d]:%d\n", i, array[i]);
    }
    printf("\n");
}
// function to arrange the elements in decending order
void decending(int array[], int i, int j, int temp, int size)
{
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
        // printing elements in decending order
        printf("after sort into decending order array[%d]:%d\n", i, array[i]);
}

int main()
{
    int i, j, temp;
    int array[10] = {2, 4, 1, 55, 43, 22, 23, 19, 11, 3};
    int size = sizeof(array) / sizeof(int);
    for (int i = 0; i < size; i++)
        printf("before sort arr[%d]:%d\n", i, array[i]);
    printf("\n");
    // ascending order function calling
    ascending(array, i, j, temp, size);
    // decending order function calling
    decending(array, i, j, temp, size);
}