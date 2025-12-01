/*
Write a program to count number of words in a file.
*/

#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *fp;
    char ch;
    int words = 0, inWord = 0;

    fp = fopen("output.txt", "r");

    if (fp == NULL) 
    {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) 
    {
        if (isspace(ch)) 
        {
            inWord = 0;
        } 
        else if (inWord == 0) 
        {
            inWord = 1; 
            words++;
        }
    }

    fclose(fp);

    printf("Total words in file = %d\n", words);

    return 0;
}