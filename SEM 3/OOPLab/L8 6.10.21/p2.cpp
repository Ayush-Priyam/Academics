/*.Write a program to create a class “department” that stores the department name and department_id as its 
private member. Derive a class “employee” from department which is having employee name,age and employee_id. 
Derive another class “accounts” from “department” in protected mode which is having 
monthly basic salary, DA(15% of basic salary ) and HRA (10% of basic salary ). 
Display all the details of an employee along with monthly salary (basic salary+DA+HRA) using necessary member 
functions.*/
#include <iostream>
#include <string.h>
using namespace std;
class department
{
    string dn;
    int did;
    public:
        void input()
        {
            cout << "Enter Dept name: ";
            cin >> dn;
            cout << "Enter EmpID:";
            cin >> did;
        }
        void disp()
        {
            cout<<"\nDept name: "<<dn<<"\nDEpt ID: "<<did<<endl;
        }

};
class employee: public department
{
    string n;
    int a;
    int eid;
    public:
    void input()
    {
        cout << "Enter Emp name: ";
        cin>>n;
        cout << "Enter Age:";
        cin >>a;
        cout<<"Enter EmpID:";
        cin>>eid;
    }
    void disp()
    {
        cout << "\nEmployee details:\nEmp name: "<<n<<"\nEmpID: "<< eid << "\nAge: " << a<<endl;
    }
};
class accounts: protected department
{
    int mbs;
    double da;
    double hra;
    double sal;
    employee e;
    public:
        void input()
        {   
            department::input();
            e.input();
            cout << "Enter Basic sal: ";
            cin >> mbs;
        }
        void calc()
        {
            da= mbs*0.15;
            hra= mbs*0.1;
            sal= mbs+da+hra;
        }
        void display()
        {   department::disp();
            e.disp();
            calc();
            cout<<"Monthly Salary: "<<sal;
        }
};
int main()
{
    accounts a;
    a.input();
    a.display();
}