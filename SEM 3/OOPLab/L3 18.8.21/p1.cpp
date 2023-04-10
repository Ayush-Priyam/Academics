#include <iostream>
using namespace std;
class student
{
    int n;
    string name[n];
    int rollNo[n];
    int total[n];

public:
    int avg;
    void input()
    {
        cout << "Enter total number of students: ";
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter total marks outof 500: ";
            cin >> total;
        }
    }
    void avg()
    {
        int t=0;
        for (int i = 0; i < n; i++)
        {
            t = t + total[i];
        }
    avg=t/n;
    }
};
/*void display(class student *s, int n)
{
    s.avg = 0;
    for (int i = 0; i < n; i++)
    {
        s.avg = s.avg + s[i].total;
    }
}*/
int main()
{    
    student s;
    
    s.input();
    s.avg();
}