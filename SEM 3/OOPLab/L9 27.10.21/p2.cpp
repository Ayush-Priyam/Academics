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
        cout << "Input name, age, dept id, salary: \n";
        cin >> n >> age >> did >> s;
    }
    void display()
    {
        cout << "Name: " << n << "\nAge: " << age << "\nDept ID: " << did << "\nSalary: " << s << "\n";
    }
    friend void operator+(employee &e, int i)
    {
        e.s = e.s + i/100.0 * e.s;
    }
    friend int operator>(employee e1, employee e2)
    {
        if (e1.s > e2.s)
            return 1;
        else
            return 0;
    }
    friend bool operator==(employee e1, employee e2)
    {
        if (e1.did == e2.did)
            return true;
        else
            return false;
    }
};
int main()
{
    employee e1, e2;
    e1.input();
    e2.input();
    e1 + 15;
    e1.display();
    cout << "\nThe employee with higher salary:\n";
    if (e1 > e2)
        e1.display();
    else
        e2.display();
    if (e1 == e2)
        cout << "\nEqual Dept. ID\n";
    else
        cout << "\nDifferent Dept. ID\n";
}