/*
Open a file, read its content line by line, and display each line on the console.
*/

#include <stdio.h>

int main() 
{
    FILE *fp;
    char line[200];

    fp = fopen("output.txt", "r");

    if (fp == NULL) 
    {
        printf("File not found!\n");
        return 1;
    }

    printf("Reading file line by line:\n\n");

    while (fgets(line, sizeof(line), fp) != NULL) 
    {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}