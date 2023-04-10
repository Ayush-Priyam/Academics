#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class student
{
    string name;
    int roll;
    int a;
public:
    void inputbase()
    {
        cout << "enter name, roll, age: ";
        cin >> name >> roll >> a;
    }
    void displays()
    {
        cout << name << "\t" << roll << "\t" << a << "\t";
    }
};
class test : public student
{
protected:
    int m[5];
};
class sports
{
    protected:
    int ms;
};
class result : public test,public sports
{
    int total;
    float p;
public:
    void input()
    {
        inputbase();
        cout << "enter 5 marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
        cout<<"Enter sports activity: ";
        cin>>ms;
    }
    void display()
    {
        displays();
        cout << total << "\t" << p << "%" << endl;
    }
    void calc()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += m[i];
        }
        total+=ms;
        p = total / 6.0;
    }
};
int main()
{
    result r;
    r.input();
    r.calc();
    cout << "Name\tRoll\tAge\tTotal\tPercentage " << endl;
    r.display();
}