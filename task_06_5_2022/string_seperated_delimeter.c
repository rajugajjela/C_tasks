#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "hello world";
    int size1 = strlen(str1);
     char str2[size1][size1];
     int size2 = strlen(*str2);
    int i,j=0,ctr=0;
       printf("\n\n all the words in a string separated by a delimiter :\n");   
    for(i=0;i<=size1;i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            str2[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            str2[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\nWords after delimeter  are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",str2[i]);
    return 0;
}
