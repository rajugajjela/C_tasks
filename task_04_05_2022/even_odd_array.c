#include <stdio.h>
void even_odd(int *array, int size)
{
    int even_numbers, odd_numbers;
    int *current_len_even = 0, *current_len_odd = 0;
    int len_even = size / 2;
    int len_odd = size / 2;
    int even_numbers[len_even], odd_numbers[len_odd];

    printf("even numbers are: ");
    for (int i = 0; i < len_even; i++)
    {
        printf("%d, ", even_numbers);
        printf("\n");
    }
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d is an even number\n", array[i]);
            printf("adding it to even_numbers[%d]\n", current_len_even);
            even_numbers[current_len_even] = array[i];
            current_len_even++;
            printf("There are %d number of elements in even_numbers array\n", current_len_even);
        }
        else
        {
            printf("%d is an odd number\n", array[i]);
            printf("adding it to odd_numbers[%d]\n", current_len_odd);
            odd_numbers[current_len_odd] = array[i];
            current_len_odd++;
            printf("There are %d number of elements in odd_numbers array\n", current_len_odd);
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(int);

    // printf("odd numbers are: ");
    // for (int i = 0; i < len_odd; i++)
    // {
    //     printf("%d, ", odd_numbers[i]);
    // }
    // printf("\n");
    // even_odd(array,size);

    return 0;
}