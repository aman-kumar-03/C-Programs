/*
Open an existing file and read its content character by character, 
and then close the file.
*/

#include <stdio.h>

int main() 
{
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r");

    if (fp == NULL) 
    {
        printf("File not found!\n");
        return 1;
    }

    printf("Reading file character by character:\n\n");

    while ((ch = fgetc(fp)) != EOF) 
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}