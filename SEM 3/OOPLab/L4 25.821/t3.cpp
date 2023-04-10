#include <iostream>
using namespace std;
class student
{

    string name;
    int roll_no, m[6];
    int total1;
    public:
    void input()
    {
        cout << "Name: ";
        cin >> name;
        cin.ignore();
        cout << "Roll: ";
        cin >> roll_no;
        cout << "Enter 6 marks: ";
        for(int i=0;i<6;i++)
        {
            cin>>m[i];
        }
    }
    void display()
    {
        cout<<name<<"\t"<< total1<<"\t";
        int a = total1 / 6;
        if (a >= 90)
        {
            cout << "O grade";
        }
        else if (a >= 80)
        {
            cout << "E grade";
        }
        else if (a >= 70)
        {
            cout << "A grade";
        }
        else if (a >= 60)
        {
            cout << "B grade";
        }
        else if(a>=40)
        {
            cout<<"C grade";
        }
        else
        {
            cout<<"F grade";
        }
    }
    void totalm()
    {
        total1=0;
        for (int i = 0; i < 6; i++)
        {
            total1+= m[i];
        }
    }
};

int main()
{
    int n;
    cout<<"Enter no of students: ";
    cin>>n;
    student b[n];
    student sff, smb;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of the student " << i + 1 << endl;
        b[i].input();
        b[i].totalm();
    }
    cout<<"Name"<<"\t"<<"Total"<<"\t"<<"Grade"<<endl;
    for (int i = 0; i < n; i++)
    {
        b[i].display();
        cout<<endl;
    }
}