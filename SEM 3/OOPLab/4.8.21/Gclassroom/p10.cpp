#include <iostream>
#include <string.h>
using namespace std;
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
    int id;
    int salary;
};
int main()
{
    int n, max=0, p;
    cout<<"\nEnter the no. of employees: ";
    cin>>n;
    struct employee e[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter Name of Employee "<< i + 1<<": ";
        cin >>e[i].name;
        cout<<"Enter Salary: ";
        cin>>e[i].salary;
        cout<<"Date of Birth in DD MM YYYY: ";
        cin>>e[i].dob.day>> e[i].dob.month>>e[i].dob.year;
        cout<<"ID: ";
        cin>>e[i].id;
        if(max<e[i].salary)
        {
            max=e[i].salary;
            p=i;
        }
    }
    cout<<"Highest salary employee details:"<<endl;
    cout << "Employee Name: "<<e[p].name<<endl;
    cout<<"ID: "<<e[p].id<<endl;
    cout << "Date Of Birth: " << e[p].dob.day << "/" << e[p].dob.month << "/" << e[p].dob.year << endl;
    cout << "Salary: " << e[p].salary << endl;
}