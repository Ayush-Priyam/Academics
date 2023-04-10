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
        printf("Roll Number: ");
        scanf("%d", &s[i].r);
        printf("Gender: ");
        getchar();
        scanf("%c", &s[i].g);
        printf("Marks: ");
        scanf("%f", &s[i].m);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent-%d \nName: %s \nRoll number: %d\nGender:%c \nMarks: %f \n\n", i+1, s[i].n, s[i].r, s[i].g, s[i].m);
    }
    return 0;
}