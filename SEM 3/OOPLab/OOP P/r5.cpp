#include <iostream>
using namespace std;

class student
{
protected:
    char name[10];
    int roll, age;
};
class test : public student
{
protected:
    int marks[5];

public:
    void input()
    {
        cout << "Name : ";
        cin >> name;
        cout << "Roll No. : ";
        cin >> roll;
        cout << "Age : ";
        cin >> age;
        cout << "Marks in 5 subject : ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void display1()
    {
        cout << "Name \t"
             << "Roll No. \t"
             << " Age \t"
             << "  Subject 1 \t"
             << "  Subject 2 \t"
             << "  Subject 3 \t"
             << "  Subject 4 \t"
             << "  Subject 5 \t" << endl;
        cout << name << "\t" << roll << "\t\t" << age << "\t\t";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << "\t\t";
        }
    }
};
class result : public test
{
protected:
    int total_marks;
    float percent;

public:
    void cal_totalmarks()
    {

        total_marks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    }
    void percentage()
    {
        percent = ((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 6.0);
    }
    void display2()
    {
        cout << "Name\t"
             << "Roll\t"
             << "Age\t"
             << "Total\t"
             << "Percentage" << endl;
        cout << name << "\t" << roll << "\t" << age << "\t" << total_marks << "\t" << percent;
    }
};

int main()
{
    result t;
    t.input();
    t.display1();
    t.display2();
}