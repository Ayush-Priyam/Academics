#include <iostream>
using namespace std;
int maxx, cnoe;
class student
{

public:
    int roll;
    string name;
    char sex;
    void get()
    {
        cout << "\nEnter data name, roll, sex: ";
        cin >> name;
        cin.ignore();
        cin >> roll >> sex;
        cin.ignore();
    }
    void show()
    {
        cout << name << "\t" << roll << "\t" << sex << "\t" << endl;
    }
};
void tfront(student *s)
{
    if(cnoe==0)
    {
    cout<<"Empty"<<endl; return;
    }
    cout << "Name\t Roll\t Sex\n";
    for (int i = 0; i < cnoe; i++)
        s[i].show();
}
void trear(student *s)
{
    if (cnoe == 0)
    {
        cout << "Empty"<<endl;
        return;
    }
    cout << "Name\t Roll\t Sex\n";
    for (int i = cnoe - 1; i >= 0; i--)
        s[i].show();
}
void insertfront(student *a)
{
    student s;

    if (cnoe == maxx)
    {
        cout << "\nStudent list full";
    }
    else
    {
        s.get();
        for (int i = cnoe - 1; i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[0] = s;
        cnoe++;
    }
}
void insertrear(student *a)
{
    student s;

    if (cnoe == maxx)
    {
        cout << "\nStudent list full\n";
    }
    else
    {
        s.get();
        a[cnoe] = s;
        cnoe++;
    }
}
void delfront(student *a)
{
    if (cnoe == 0)
    {
        cout << "Empty List";
    }
    else
    {
        for (int i = 1; i < cnoe; i++)
        {
            a[i - 1] = a[i];
        }
        cnoe--;
    }
}
void delrear()
{
    if (cnoe == 0)
    {
        cout << "\nEmpty List";
    }
    else
        cnoe--;
}
void searchfr(student *a)
{
    cout << "\nEnter roll to search";
    int r;
    cin >> r;
    int i;
    for (i = 0; i < cnoe; i++)
    {
        if (r == a[i].roll)
            break;
    }
    if (i == cnoe)
        cout << "Not Found" << endl;
    else
    {
        cout << "\nRoll number Found\nName\t Roll\t Sex\n " << endl;
        a[i].show();
    }
}
void searchrear(student *a)
{
    cout << "\nEnter roll to search";
    int r;
    cin >> r;
    int i;
    for (i = cnoe - 1; i >= 0; i--)
    {
        if (r == a[i].roll)
            break;
    }
    if (i == -1)
        cout << "\nNot Found" << endl;
    else
    {
        cout << "\nRoll number Found\nName\t Roll\t Sex\n " << endl;
        a[i].show();
    }
}
int main()
{
    cout << "Enter max no of students: ";
    cin >> maxx;
    student s[maxx];
    // insertfront(s);
    // insertfront(s);
    // insertrear(s);
    // tfront(s);
    // searchfr(s);
    // searchrear(s);
    int b;
    while (true)
    {
        cout << "\n1.) Insert data. \n2.) Delete data. \n3.) Traverse data. \n4.) Search data. \n5.) Exit. \n\nEnter Your Choice: ";
        cin >> b;
        switch (b)
        {
        case 1:
            int p;
            cout << "1.) Insert data from front. \n2.) Insert data from rear. \n\nEnter Your choice: ";
            cin >> p;
            if (p == 1)
            {
                insertfront(s);
            }
            if (p == 2)
            {
                insertrear(s);
            }
            break;
        case 2:
            cout << "\n1.) Delete data from front. \n2.) Delete data from rear. \n\nEnter Your choice: ";
            cin >> p;
            if (p == 1)
            {
                delfront(s);
            }

            if (p == 2)
            {
                delrear();
            }
            break;
        case 3:
            cout << "\n1.) Traverse data from front. \n2.) Traverse data from rear. \n\nEnter your choice: ";
            cin >> p;
            if (p == 1)
            {
                tfront(s);
            }

            if (p == 2)
            {
                trear(s);
            }
            break;
        case 4:
            cout << "\n1.) Search data from front. \n2.) Search data from rear. \n\nEnter your choice: ";
            cin>>p;
            if (p == 1)
            {
                searchfr(s);
            }

            if (p == 2)
            {
                searchrear(s);
            }
            break;

        case 5:
            cout<<"Thank You."<<endl;
            return 0;
        default:
            cout << "\nInvalid Option.";
        }
    }
}