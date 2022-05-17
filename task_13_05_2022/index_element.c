#include <stdio.h>
// function to find the index of element
void index_element(int array[], int index, int size, int element, int i)
{
    for (i = 0; i < size; i++)
    {
        if (element == array[i])
            index = i;
    }
    // printing the index of the element
    printf("INDEX of the given element:%d\n", index);
}
int main()
{
    int i, index, element = 5;
    // Initialize array
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Calculate length of array
    int size = sizeof(array) / sizeof(int);
    // index element function calling
    index_element(array, index, size, element, i);
}