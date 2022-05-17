#include <stdio.h>
// function to print thre array in given range
void range(int array[], int length, int min, int max)
{
  printf("elements in a given range:");
  for (int i = 0, j = min; i < length && j < max; i++, j++)
  {
    array[i] = j;
    // printing the array in given range
    printf("%d ", array[i]);
  }
  printf("\n");
}
void step(int array[], int length, int min, int max, int step)
{
  printf("elements in a given range by using step:");
  for (int i = 0, j = min; i < length && j < max; i++, j += step)
  {
    array[i] = j;
    // printing the array in given range
    printf("%d ", array[i]);
  }
}
int main()
{
  int array[50];
  int length = sizeof(array) / sizeof(int);
  // range function calling
  range(array, length, 2, 9);
  step(array, length, 2, 9, 2);
}