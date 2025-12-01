/*
Write a C program to create a new file and write text into it.
*/

#include <stdio.h>

int main() 
{
    FILE *fp;
    fp = fopen("output.txt", "w");

    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "This is a sample text written to the file.\n");
    fprintf(fp, "File operations in C are safe when used correctly.\n");

    fclose(fp);
    printf("File created and text written successfully.\n");

    return 0;
}