#include <iostream> 
using namespace std; 
class student 
{ 
    public: 
    char name[50][50]; 
    int roll[50]; 
    int total[50]; 
    float avg; 
    void input(int n)
    {
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter details of the student " << i + 1 << endl;
            cout << "Name: ";
            cin >> name[i];
            cin.ignore();
            cout << "Roll: ";
            cin >> roll[i];
            cout << "Total Marks: ";
            cin >> total[i];
            t = t + total[i];
        }
        display(t, n);
    } 
    void display(int t, int n)
    {
        avg= t/n;
        cout<<" Average: "<<avg<<endl;
    } 
};

int main()
{
    student s;
    int n, t = 0;
    cout << "Enter the number of students: ";
    cin >> n;
    s.input(n);
    return 0;
}