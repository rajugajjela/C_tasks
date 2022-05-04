#include <stdio.h>
int Prime_num(int number)
{
  int count = 0;

  for (int i = 2; i <= number / 2; i++)
  {
    if (number % i == 0)
    {
      count = 1;
      break;
    }
  }

  if (number == 1)
    count = 1;

  return count;
}

int main()
{
  int min = 1, max = 10, j, i;
  int len = max - min; // 9
  int array[len];      // {1,2,3,4,5,6,7,8,9}
  // initialize the array so it contains all the numbers from min to max
  printf("initialising array from %d until %d:", min, max);
  for (int i = 0, j = min; i < len && j < max; i++, j++)
  {
    array[i] = j;
    printf("%d ", array[i]);
  }

  printf("\nPrime numbers from %d to %d are:\n", min, max);
  for (int i = min; i <= max; i++)
  {
    if (Prime_num(i) == 0)
      printf(" %d\t ", i);
  }

  return 0;
}
