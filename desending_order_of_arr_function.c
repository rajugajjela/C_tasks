#include <stdio.h>
int desending(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        printf("after sort arr[%d]:%d\n", i, arr[i]);
}
int main()
{
    int i, size; // sorting array in desending order
    int arr[10] = {2, 4, 1, 55, 43, 22, 23, 19, 11, 3};
    size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
        printf("before sort arr[%d]:%d\n", i, arr[i]);
    desending(arr, size);
}