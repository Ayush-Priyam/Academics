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
    struct student s;
    printf("\nEnter the students data:\n");
    printf("\nName: ");
    gets(s.n);
    printf("\nRoll Number: ");
    scanf("%d", &s.r);
    printf("Marks: ");
    scanf("%f", &s.m);
    printf("Gender: ");
    getchar();
    scanf("%c", &s.g);
    printf("\nThe students details are\n");
    printf("\nName: %s \nRoll number: %d\nGender:%c \nMarks: %f",s.n, s.r, s.g, s.m);
    return 0;
}