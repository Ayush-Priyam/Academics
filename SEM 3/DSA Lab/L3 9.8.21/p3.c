#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks[5];
    int total;
    char grade;
};
int main()
{
    struct student a[5];
    struct student t;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", a[i].name);
        fflush(stdin);
        printf("Enter roll: ");
        scanf("%d", &a[i].rollno);
        fflush(stdin);
        a[i].total =0;
        printf("Enter grade: ");
        scanf("%c", &a[i].grade);
        printf("Enter 5 subject marks: ");
        for(int j=0;j<5;j++)
        {
            scanf("%d", &a[i].marks[j]);
            a[i].total=a[i].total+a[i].marks[j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[j].total>a[i].total)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("Name:%s Roll:%d Total:%d Grade:%c\n", a[i].name, a[i].rollno, a[i].total, a[i].grade);
}