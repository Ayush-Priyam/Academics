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
        cout<<"Enter data name, roll, sex: ";
        cin>>name>>roll>>sex;
    }
    void show()
    {
        cout << name << "\t" << roll << "\t" << sex << "\t" << endl;
    }
};
void tfront(student *s)
{
    cout<<"Name\t Roll\t Sex\n";
    for(int i=0; i<cnoe; i++)
    s[i].show();
}
void trear(student *s)
{
    cout << "Name\t Roll\t Sex\n";
    for (int i = cnoe-1; i>=0; i--)
        s[i].show();
}
void insertfront(student *a)
{
    student s;
    if(cnoe==maxx)
    {
        cout<<"Student list full";
    }
    else{
        s.get();
        for(int i=cnoe-1;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=s;
        cnoe++;
    }
}
void insertrear(student *a)
{
    student s;
    
    if(cnoe==maxx)
    {
        cout << "Student list full";
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
        for(int i=1;i<cnoe;i++)
        {
            a[i-1]=a[i];
        }
        cnoe--;
    }
}
void delrear()
{
    if(cnoe==0)
    {
        cout<<"Empty List";
    }
    else
        cnoe--;
}
void searchfr(student *a)
{
    cout<<"Enter roll to search";
    int r;
    cin>>r;
    int i;
    for(i=0;i<cnoe;i++)
    {
        if(r==a[i].roll)
        break;
    }
    if(i==cnoe)
        cout<<"Not Found"<<endl;
    else 
    {
        cout << "Roll number Found\nName\t Roll\t Sex\n " << endl;
        a[i].show();
    }
}
void searchrear(student *a)
{
    cout << "Enter roll to search";
    int r;
    cin >> r;
    int i;
    for (i = cnoe-1; i>=0; i--)
    {
        if (r == a[i].roll)
            break;
    }
    if (i == -1)
        cout << "Not Found" << endl;
    else
    {
        cout << "Roll number Found\nName\t Roll\t Sex\n " << endl;
        a[i].show();
    }
}
int main()
{
    cout<<"Enter no of students: ";
    cin>>maxx;
    student s[maxx];
    insertfront(s);
    insertfront(s);
    insertrear(s);
    tfront(s);
    searchfr(s);
    searchrear(s);
}