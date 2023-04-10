#include <iostream>
#include <string.h>
using namespace std;
class company
{
    string cn;
    int y;
    public:
    void inputbase()
    {
        cout<<"Enter company name, year: ";
        cin>>cn>>y;
    }
    void disp()
    {
        cout<<"\n\nCompany Name: "<<cn<<"\t Year:"<<y<<endl;
    }
};
class employee: public company
{
    string name;
    string des;
    int code;
    int age;
public:
    void input()
    {
        inputbase();
        cout<<"Enter employee name, code, age, designation: ";
        cin >> name >> code >> age >> des;
    }
    void display()
    {
        disp();
        cout << "\nName\tJob ID\tAge\tDesignation" << endl;
        cout << name << "\t" << code << "\t" << age << "\t" << des << endl;
    }
};
class department : public company
{
    string dn;
    int ne;
    int did;
    public:
    void input()
    {
        cout << "Enter dept name, no of employee, dept id: ";
        cin >> dn >> ne>>did;
    }
    void display()
    {
        cout << "\nDept Name: " << dn << "\n No of employees:" << ne <<"\n Dept ID: "<<did<< endl;
    }
};
int main()
{
    employee e;
    department d;
    e.input();
    d.input();
    e.display();
    d.display();
}