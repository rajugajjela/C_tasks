#include <stdio.h>
// function to calculate the mean
void mean_array(float mean, int sum, int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    mean = sum / size;
    // printing the sum of elements in array
    printf("Sum of given array is :%d\n", sum);
    // printing the mean of array
    printf("\nmean of array is %f\n", mean);
}
int main()
{
    float mean = 0;
    int sum = 0;
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    // calculating the size of given array
    int size = sizeof(array) / sizeof(int);
    // mean function calling
    mean_array(mean, sum, array, size);
}