#include <iostream>
using namespace std;
class student;
class student
{
    string name;
    int roll;
    int a;

public:
    void inputs()
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
class result: protected test
{
    int total;
    float p;
    public:
    void input()
    {
        inputs();
        cout << "enter 5 marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
    }
    void display()
    {
        displays();
        cout<<total<<"\t"<<p<<"%"<<endl;
    }
    void calc()
    {
        total=0;
        for (int i = 0; i < 5; i++)
        {
            total+= m[i];
        }
        p=total/5.0;
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