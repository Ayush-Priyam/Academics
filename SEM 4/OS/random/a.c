// 6. Write a program to copy the contents of a text file into another.
#include <stdio.h>
int main()
{
    system("cls");
    FILE *fs, *ft;
    char ch;
    fs = fopen("aviral.txt", "r");
    if (fs == NULL)
        puts("Cannot open source file");
    ft = fopen("newfile.txt", "w");
    if (ft == NULL)
        puts("Cannot open target file");
    ch = fgetc(fs);
    while (ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    if (ft != NULL && fs != NULL)
        printf("source file content is copied to target file");
    fclose(fs);
    fclose(ft);
    return 0;
}