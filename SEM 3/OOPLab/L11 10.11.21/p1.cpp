#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    int age,sal;
    string name;
    string dept;

public:
    void show()
    {
        cout << "Name: " << name << "\nAge: " << age << "\nDepartment: "<<dept<<"\nSalary: " <<sal<<"\n\n";
    }
    void input()
    {
        cout<<"Enter name, age, dept, salary: ";
        cin>> name>>age>>dept>>sal;
    }
    void *operator new(size_t size)
    {
        void *p = (void *)malloc(size);
        return p;
    }

};
int main()
{
    employee *e1 = new employee();
    employee *e2= new employee();
    e1->input();
    e2->input();
    cout<<"\nDetails: \n";
    e1->show();
    e2->show();
    return 0;
}
