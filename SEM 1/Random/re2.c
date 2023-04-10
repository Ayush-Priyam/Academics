#include <stdio.h>
#include <string.h>
struct student
{
    int r;
    char n[30];
    char g;
    float m;
};
int main()
{
    struct student s[100];
    int n;
    printf("\nEnter number of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n\nEnter student-%d data:\n", i + 1);
        printf("\nName: ");
        getchar();
        gets(s[i].n);
        printf("\nRoll Number: ");
        scanf("%d", &s[i].r);
        printf("\nGender: ");
        scanf("%c", &s[i].g);
        printf("\nMarks: ");
        scanf("%f", &s[i].m);
    }
    printf("\nThe student details are\n");
    printf("\nSl.No.\tRoll No.\tName\t\tGender\tMarks\n");
    printf("\n== == \t == == == =\t == ==\t\t == == =\t == == =\n");
    for (int i = 0; i < n; i++)
    {
printf("\n%d\t%d\t%s\t%c\t%f", i+1, s[i].r, s[i].n, s[i].g, s[i].m);
    }
    return 0;
}