#include<stdio.h>
int main()
{
    int min =10, max = 20,n,j;
    int len = max - min; // 9
    int array[len]; // {1,2,3,4,5,6,7,8,9}
    // initialize the array so it contains all the numbers from min to max
    printf("initialising array from %d until %d: ", min, max);
    for(int i=0, j=min; i<len && j<max; i++, j++)
    {
      array[i] = j;
      printf(" %d",array[i]);
    }

   printf("\nPrime Numbers Between %d and %d are:\n",min, max); 

   for(int i=0;i<len;i++)
   {
      n=array[i];
      for(j=2;j<=n/2;j++)
      {
       if(n%j==0)
       break;
      }
      if(j>n/2)
      printf("%d ",n);
   }   
   
}