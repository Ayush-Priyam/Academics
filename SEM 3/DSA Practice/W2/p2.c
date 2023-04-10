#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    float mark;
    char name[20];
};

int main()
{
    struct student s;
    s.roll=5;
    s.mark=95.67;
    scanf("%s", &s.name);
    printf("%d %f %s", s.roll,s.mark,s.name);
}