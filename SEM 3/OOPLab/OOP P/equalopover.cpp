#include <iostream>
//#include <string.h>
using namespace std;
class student
{
    int roll;
    string name;

public:
    student()
    {
    }
    student(int a, string b)
    {
        roll = a;
        name = b;
    }
    void display()
    {
        cout << "Name: " << name <<"\nRoll= " << roll <<  endl;
    }
    void operator =(student s)
    {
        cout << "\nUser Defined assignment operator called\n";
        roll=s.roll*10;
        name = "CopyOf"+s.name;
    }
};
int main()
{
    student s1(1933, "Ayush");
    cout<<"Original:\n";
    s1.display();
    student s2, s3;
    s2=s1;
    s2.display();
    s3=s2;
    s3.display();
    return 0;
}