#include <stdio.h>
float mean_func(int *arr, int size);
float median_func(int *arr, int size);
int main()
{
    int sum = 0;
    float mean = 0, median = 0;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    mean = mean_func(arr, size);
    median = median_func(arr, size);
    printf("\nSum of given array is :%d\n", sum);
    printf("\nmean of array is %lf\n", mean);
    printf("\nMedian is %f\n", median);
    return 0;
}

float mean_func(int *arr, int size)
{
    int sum = 0, i;
    float mean = 0;
    while (i < size)
    {
        sum = sum + arr[i];
        i++;
    }
    mean = sum / size;
    return mean;
}
float median_func(int *arr, int size)
{
    float median = 0;
    if (size % 2 == 0)
        median = (arr[size / 2] + arr[size / 2 - 1]) / 2.0;
    else
        median = arr[size / 2];
    return median;
}