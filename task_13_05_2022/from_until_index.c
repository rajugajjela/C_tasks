#include <stdio.h>
// function to sort the given array
int sort_array(int array[], int i, int j, int temp, int size)
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
    return array[i];
}
// function to the find the max and min array elements
void find_index_range(int array[], int size, int from, int until, int i, int number)
{
    
    for (i = 0; i < size; i++)
    {
        if (until > array[i] && from < array[i])
        {
            if(number==array[i])
            {
                printf("\nINDEX of the element:%d\n",i);
            }
        }
    }
    if(number!=array[i])
           printf("\ngiven number not in the range");
}
int main()
{
    int  i, j, temp;
    int from = 12, until = 18;
    int array[] = {10, 11, 12, 13, 14, 15, 16, 17, 2, 4, 3, 1, 18, 19};
    int number=13;
    int size = sizeof(array) / sizeof(int);
    // sorting function calling
    sort_array(array, i, j, temp, size);
    for (i = 0; i < size; i++)
    {
        // printing sorting array
        printf("%d ", array[i]);
    }
    // function calling
    find_index_range(array, size, from, until, i,number);
}
