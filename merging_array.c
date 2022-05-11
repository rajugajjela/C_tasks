#include <stdio.h>
int main()
{
    int j, i;
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    int size3 = size1 + size2;
    int array3[size3];
    for (i = 0; i < size1; i++)
    {
        array3[i] = array1[i];
        printf(" arrar3[%d]:%d\n",i, array3[i]);
    }
    for (i = 0, j = size1; j < size3 && i < size2; i++, j++)
    {
        array3[j] = array2[i];
    }
    for (i = 0; i < size3; i++)
    {
        printf("after merging array3[%d]:%d\n",i, array3[i]);
    }
    printf("\nAfter sorting...\n");
    for(int i=0;i<size3;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<size3 ;j++)
        {
            if(array3[i]>array3[j])
            {
                temp=array3[i];
                array3[i]=array3[j];
                array3[j]=temp;
            }
        }
    }   
    
    for(int i=0 ; i<size3 ; i++)       //Print the sorted Array 
    {
        printf(" %d ",array3[i]);
    }
    return 0;   
}