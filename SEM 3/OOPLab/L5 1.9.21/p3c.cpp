#include <iostream>
#include <string.h>
using namespace std;
class marks;
class student
{
    char name[40];
    int roll_no;

public:
    void input()
    {
        cin.ignore();
        cout << "Enter the name ";
        cin.getline(name, 40);
        cout << "Enter Roll Number ";
        cin >> roll_no;
    }
    friend void display(student, marks);
    void print(marks);
};
class marks
{
    int sub1, sub2, sub3;

public:
    void input()
    {
        cout << "Enter 1st subject marks ";
        cin >> sub1;
        cout << "Enter 2nd subject marks ";
        cin >> sub2;
        cout << "Enter 3rd subject marks ";
        cin >> sub3;
    }
    friend void display(student, marks);
    friend void student ::print(marks);
};
void student ::print(marks b)
{
    int avg = (b.sub1 + b.sub2 + b.sub3) / 3;
    cout << name << "\t\t\t" << roll_no << "\t\t\t" << b.sub1 << "\t\t\t" << b.sub2 << "\t\t\t" << b.sub3 << "\t\t\t" << avg << endl;
}
void display(student a, marks b)
{
    int avg = (b.sub1 + b.sub2 + b.sub3) / 3;
    cout << a.name << "\t\t\t" << a.roll_no << "\t\t\t" << b.sub1 << "\t\t\t" << b.sub2 << "\t\t\t" << b.sub3 << "\t\t\t" << avg << endl;
}
int main()
{
    int n;
    student s[100];
    marks m[100];
    cout << "Enter the number of students : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].input();
        m[i].input();
    }
    cout << "Making a common friend function to both the classes:" << endl;
    cout << "NAME\t\t\tROLL\t\t\tSUB1\t\t\tSUB2\t\t\tSUB3\t\t\tAVERAGE" << endl;
    for (int i = 0; i < n; i++)
    {
        display(s[i], m[i]);
    }
    cout << "Making a member function of student class as friendly to marks class:" << endl;
    cout << "NAME\t\t\tROLL\t\t\tSUB1\t\t\tSUB2\t\t\tSUB3\t\t\tAVERAGE" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].print(m[i]);
    }
    return 0;
}