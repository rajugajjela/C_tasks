#include <stdio.h>
#include <string.h>
void sub_string(char str1[], char str2[], int size1, int size2)
{
    int i, j;
    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == size2)
    {
        printf("Substring is found\n ");
    }
    else
    {
        printf("Substring not found\n");
    }
    printf("%s\n%s ", str1, str2);
}

int main()
{
    char str1[] = "hello world";
    char str2[] = "hell";
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    sub_string(str1, str2, size1, size2);
}