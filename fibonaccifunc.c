#include <stdio.h>
int fibonacci(int *array, int size)
{
    int first_num = array[0];
    int second_num = array[1];
    int third_num = first_num + second_num;
    first_num = second_num;
    second_num = third_num;
    // return 0;
}
void print_array(int *array, int size)
{
    printf(" [");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("%d ,", array[i]);
        else
            printf("%d ] ", array[i]);
    }
}
int main()
{
    int array[] = {1, 2, 3, 5, 8, 13};
    int size = sizeof(array) / sizeof(int);
    print_array(array, size);
}