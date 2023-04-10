#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[20];
    struct date dob;
    struct date doj;
    int salary;
};
int n;
void display(struct employee *, int);
void swap(struct employee *, struct employee *);
void namesort(struct employee *);
int date(struct date , struct date);
void dob(struct employee *);
void doj(struct employee *);
void salsort(struct employee *);
int main()
{
    printf("\nEnter the no. of employees: ");
    scanf("%d", &n);
    struct employee e[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Name of Employee %d: ", (i + 1));
        scanf("%s", e[i].name);
        fflush(stdin);
        printf("Enter Salary: ");
        scanf("%d", &e[i].salary);
        printf("Date of Birth in DD MM YYYY: ");
        scanf("%d%d%d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
        printf("Date of Joining in DD MM YYYY: ");
        scanf("%d%d%d", &e[i].doj.day, &e[i].doj.month, &e[i].doj.year);
    }
    namesort(e);
    dob(e);
    doj(e);
    salsort(e);
}
void display(struct employee *e, int k)
{
    for (int i = 0; i < n; i++)
    {
        printf("Employee Name: %s \t", e[i].name);
        if (k == 1 || k == 0)
            printf("Date Of Birth: %d.%d.%d ", e[i].dob.day, e[i].dob.month, e[i].dob.year);
        if (k == 2 || k == 0)
            printf("Date Of Joining: %d/%d/%d", e[i].doj.day, e[i].doj.month, e[i].doj.year);
        if (k == 3 || k == 0) 
            printf("Salary: %d", e[i].salary);
        printf("\n");
    }
}
void swap(struct employee *e1, struct employee *e2)
{
    struct employee x;
    x = *e1;
    *e1 = *e2;
    *e2 = x;
}
void namesort(struct employee *e)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(e[i].name, e[j].name) > 0)
            {
                swap(&e[i], &e[j]);
            }
        }
    }
    printf("\nName sorted list: \n");
    display(e,0);
}
int date(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return 0;
    else if (d1.year > d2.year)
        return 1;
    else
    {
        if (d1.month < d2.month)
            return 0;
        else if (d1.month > d2.month)
            return 1;
        else
        {
            if (d1.day < d2.day)
                return 0;
            else
                return 1;
        }
    }
}
void dob(struct employee *e)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (date(e[i].dob, e[j].dob)==1)
            {
                swap(&e[i], &e[j]);
            }
        }
    }
    printf("\nDate Of Birth sorted list: \n");
    display(e,1);
}
void doj(struct employee *e)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (date(e[i].doj, e[j].doj)==1)
            {
                swap(&e[i], &e[j]);
            }
        }
    }
    printf("\nDate Of Joining sorted list: \n");
    display(e,2);
}
void salsort(struct employee *e)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (e[i].salary < e[j].salary)
            {
                swap(&e[i], &e[j]);
            }
        }
    }
    printf("\nSalary sorted list: \n");
    display(e, 3);
}