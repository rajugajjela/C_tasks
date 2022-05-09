#include <stdio.h>
// to find the mul of arrays
void mul_array(int array1[], int array2[], int array3[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        // printing array1 before mul
        printf("array1[%d]:%d\n ", i, array1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        // printing array2 before mul
        printf("\narray2[%d]:%d ", i, array2[i]);
    }
    printf("\nprinting array after multiplicaton:");
    for (int i = 0; i < size1; i++)
    {
        array3[i] = array1[i] * array2[i];
        // printing arrays after mul
        printf("\narray3[%d]:%d ", i, array3[i]);
    }
}
int main()
{

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    int array3[size1];
    // function calling
    mul_array(array1, array2, array3, size1, size2);
    return 0;
}