#include <iostream>
using namespace std;
struct student
{
    char name[20];
    int roll;
    float avg;
    int rank;
};
int main()
{
    int n;
    cout<<"Enter no of students: ";
    cin>>n;
    struct student a[n];
    struct student t;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nEnter name of student "<< i + 1<< ": ";
        cin>>a[i].name;

        printf("Enter roll: ");
        cin>>a[i].roll;
        printf("Enter average: ");
        cin>>a[i].avg;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j].avg > a[i].avg)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
                a[i].rank=i+1;
                a[j].rank=j+1;
            }
        }
    }
    cout<<"\n";
    cout<<"Roll\t Name\tAverage\t Rank\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i].roll << "\t" << a[i].name << "\t" << a[i].avg << "\t" << a[i].rank<< endl;
    }
}