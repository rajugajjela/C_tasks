#include <stdio.h>
// print each character of a string separated by a delimiter
void string(char ch[], int size)
{
    // Displays characters using delimeter from given string
    printf("Individual characters from given string:\n");

    // Iterate through the string and display individual character
    for (int i = 0; i < size; i++)
    {
        // printing string by using delimeter 
        printf("%c, ", ch[i]);
    }
}
int main()
{
    char ch[] = "helloworld";
    int size = sizeof(ch) / sizeof(char);
    //functon calling
    string(ch,size);
    return 0;
}