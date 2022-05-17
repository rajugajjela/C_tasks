#include <stdio.h>
// function to find the maximum element in array
int maximum_array(int array[], int temp, int size, int i)
{
    temp = array[0];
    for (i = 0; i < size; i++)
    {
        if (temp < array[i])
        {
            temp = array[i];
        }
    }
    return temp;
}
// function to find the minimum element in array
int minimum_array(int array[], int temp, int size, int i)
{
    temp = array[0];
    for (i = 0; i < size; i++)
    {
        if (temp > array[i])
        {
            temp = array[i];
        }
    }
    return temp;
}
int main()
{
    int i, temp, max, min;
    int array[] = {22, 33, 42, 44, 2, 55, 66, 43, 56, 77};
    // calculating the size of given array
    int size = sizeof(array) / sizeof(int);
    // maximum array function calling
    max = maximum_array(array, temp, size, i);
    // minimum array function calling
    min = minimum_array(array, temp, size, i);
    // printing the maximum element in a given array
    printf("the maximum element  is:%d\n", max);
    // printing the minimum element in a given array
    printf("the minimum element  is:%d\n", min);
}
