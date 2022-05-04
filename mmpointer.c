#include <stdio.h>
int main()
{
    float mean = 0, median = 0;
    int sum = 0;
    int *ptr;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    ptr =arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
        sum = sum + ptr[i];
        // ptr++;
    }
    mean = sum / n;
    printf("\nSum of given array is :%d\n", sum);

    printf("\nmean of array is %f\n", mean);

    if (n % 2 == 0)
        median = (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    else
        median = arr[n / 2];
    printf("\nMedian is %f\n", median);
}