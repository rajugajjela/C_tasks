#include <stdio.h>
void assign(int array[], int size)
{
    int number;
    printf("number=");
    for (int i = 0; i < size; i++)
    {
        number = array[i];
       
    }
     printf("%d ", number);
}
int main()
{
    int i;
    // Initialize array
    int array[] = {1, 2, 3, 4, 5};
    // Calculate length of array
    int size = sizeof(array) / sizeof(int);
    assign(array, size);
}