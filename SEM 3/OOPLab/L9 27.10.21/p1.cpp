#include <iostream>
using namespace std;
class employee
{
private:
    string n;
    int age;
    int did;
    double s;
public:
    void input()
    {
        cout<<"Input name, age, dept id, salary: \n";
        cin>>n>>age>>did>>s;
    }
    void display()
    {
        cout << "Name: "<<n<<"\nAge: "<<age<<"\nDept ID: "<<did<<"\nSalary: "<<s<<"\n";
    }
    void operator+(int i)
    {
        s=s+i/100.0*s;
    }
    int operator>(employee e)
    {
        if(s>e.s) return 1;
        else return 0;
    }
    bool operator==(employee e)
    {
        if(did==e.did) return true;
        else return false;
    }
};
int main()
{
    employee e1, e2;
    e1.input();
    e2.input();
    e1+15;
    e1.display();
    cout<<"\nThe employee with higher salary:\n";
    if(e1>e2)
        e1.display();
    else
        e2.display();
    if (e1==e2)
        cout << "\nEqual Dept. ID\n";
    else
        cout << "\nDifferent Dept. ID\n";
}