#include <iostream>
#include <stdlib.h>
using namespace std;
class num
{
    int a[5];
    public:
    void display()
    {
        cout<<"Array: ";
        for(int i=0; i<5;i++)
        {
            cout<<a[i]<<", ";
        }
        sum();
    }
    void sum()
    {
        int s=0;
        double av;
        for (int i = 0; i < 5; i++)
        {
            s+= a[i];
        }
        av=s/5.0;
        cout << "\nSum: " << s;
        cout << "\nAverage : " << av;
    }

    int& operator[](int k)
    {
        return a[k];
    }
};
int main()
{
    num a;
    cout<<"Enter 5 numbers: ";
    for(int i= 0; i<5; i++)
    {
        cin>>a[i];
    }
    a.display();
}