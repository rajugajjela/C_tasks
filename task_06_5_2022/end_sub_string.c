#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool sub_string(char string[], char substring[])
{
    int size_string = strlen(string);
    int size_substring = strlen(substring);
    if (size_substring > size_string)
        return false;
    for (int i = 0; i < size_substring; i++)
    {
        if (string[size_string - i] != substring[size_substring - i])
            return false;
    }
    return true;
}
int main()
{
    char string[] = "apple banana";
    char substring[] = "na";

    if (sub_string(string, substring))
        printf("The string ends with the substring\n");
    else
        printf("The string does not ends with the substring\n");

    return 0;
}
