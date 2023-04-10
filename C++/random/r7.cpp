#include <iostream>
using namespace std;
class student
{
    char name[20];
    int roll;
    int age;

public:
    void getdata()
    {
        cout << "enter name , roll no and age" << endl;
        cin >> name >> roll >> age;
    }
    void display()
    {
        cout << "Name is " << name << endl;
        cout << "Roll number is " << roll << endl;
        cout << "Age is " << age << endl;
    }
};
class test : public student
{
public:
    float marks[5];
    void getmarks()
    {
        cout << "enter marks of 5 subjects" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void show()
    {
        cout << "marks are " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << endl;
        }
    }
};
class result : public test
{
    float t_marks;
    float per;

public:
    result()
    {
        t_marks = 0;
    }
    void calc()
    {
        for (int i = 0; i < 5; i++)
        {
            t_marks = t_marks + marks[i];
        }
        per = t_marks / 5;
    }
    void show_result()
    {
        cout << "Total marks is " << t_marks << endl;
        cout << "Percentage is " << per;
    }
};
int main()
{
    result r;
    r.getdata();
    r.getmarks();
    cout << "details are : " << endl;
    r.display();
    r.show();
    r.calc();
    r.show_result();
    return 0;
}