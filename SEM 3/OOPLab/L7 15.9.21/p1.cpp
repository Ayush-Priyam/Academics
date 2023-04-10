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
        cout<<"enter name, roll, age: ";
        cin>>name>>roll>>a;
    }
    void displays()
    {
        cout << name << "\t" << roll << "\t" << a<<"\t";
    }
};
class test: public student
{
    int m[5];
    public:
    void input()
    {
        inputs();
        cout<<"enter 5 marks: ";
        for(int i=0; i<5; i++)
        {
            cin>>m[i];
        }
    }
    void display()
    {
        displays();
        for (int i = 0; i < 5; i++)
        {
            cout<< m[i]<<" ";
        }
        cout<<"\n";
    }
};
int main()
{
    test t;
    t.input();
    cout << "Name\tRoll\tAge\t5 marks "<<endl;
    t.display();
}