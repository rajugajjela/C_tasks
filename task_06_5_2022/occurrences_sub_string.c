#include <stdio.h>
#include <string.h>
void occurrence(char str1[], char str2[], int size1, int size2)
{
    int i, j;
    int count = 0, count1 = 0;
    for (i = 0; i < size1;)
    {
        j = 0;
        count = 0;
        while ((str1[i] == str2[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == size2)
        {
            count1++;
            count = 0;
        }
        else
            i++;
    }
    printf("%s occurs %d times in %s ", str2, count1, str1);
}
void main()
{
    char str1[] = "hello world";
    char str2[] = "o";
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    occurrence(str1,str2,size1,size2);
}