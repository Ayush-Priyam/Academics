#include <iostream>
using namespace std;
class student;
class marks;
class student
{
    string *name;
    int *m;
public:
    student()
    {
        name= new string();
        m= new int[3];
    }    
    void input()
    {
        cout << "Enter name and marks: ";
        cin >> *name >> m[0]>>m[1]>> m[2];  
    }
    void display()
    {
        float avg = (m[0] + m[1] + m[2]) / 3.0;
        cout << *name << "\t" << "\t" << m[0] << "\t" << m[1] << "\t" << m[2] << "\t" << avg << endl;
    }
    ~student()
    {
        cout<<"Destructor called"<<endl;
        delete name;
        delete m;
    }
};

int main()
{
    student s1, s2;
    s1.input();
    s2.input();
    cout << "\nName\tMark1\tMark2\tMark3\tAverage" << endl;
    s1.display();
    s2.display();
}
