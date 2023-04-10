#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollNo;
    int total;
    static float avg;
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter total marks outof 500: ";
        cin >> total;
    }
    void avg(int a)
    {
        avg= a;
    }
};
void display(student s, int n)
{
    float avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg = avg + s[i].total;
    }
    avg=avg/n;
}
int main()
{ 
    int n;
    cout << "Enter total number of students: ";
    cin >> n;
    student s[n];
    for(int i=0; i<n; i++)
        s[i].input();
    display(s);
}