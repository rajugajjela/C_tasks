#include <stdio.h>
#include <stdlib.h> // For exit()
int main()
{
    FILE *source_file, *destination_file;
    char filename[100];
    char ch;
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
    // open the file for reading
    source_file = fopen(filename, "r");
    if (source_file == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
    // open the file for writing
    destination_file = fopen(filename, "w");
    if (source_file == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    // Read the contents of the file
    while ((ch = getc(source_file)) != EOF)
        putc(ch, destination_file);

    fclose(source_file);
    fclose(destination_file);
}