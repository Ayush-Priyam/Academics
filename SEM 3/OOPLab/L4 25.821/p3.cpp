#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    string name;
    string dname;
    int jobid;
    int age;

public:
    void input()
    {
        cin >> name >> jobid >> age>> dname;
    }
    friend void display(employee *e, int n)
    {
        cout << "Name\tJob ID\tAge\tDepartment" << endl;
        for (int i = 0; i < n; i++)
            cout<< e[i].name << "\t" << e[i].jobid << "\t" << e[i].age << "\t"<< e[i].dname<<endl;
    }
};
int main()
{
    int n;
    cout << "Enter no of employee: ";
    cin >> n;
    employee b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details: name, jobid, age, dept name for employee " << i + 1 << endl;
        b[i].input();
    }
    display(b, n);
}