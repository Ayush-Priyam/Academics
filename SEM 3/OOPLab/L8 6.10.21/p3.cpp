#include <iostream>
using namespace std;
class base
{
    int a;
public:
    base()
    {
        a=0;
    }
    base(int k)
    {
        a=k;
    }
    void disp()
    {
        cout << "BASE class data:"<<a<<endl;
    }
};
class derived : public base
{
    int b;
public:
    derived() : base()
    {
        b=0;
    }
    derived(int k, int l) : base(l)
    {
        b=k;
    }
    void disp()
    {   
        base::disp();
        cout << "Derived class data:"<<b<<endl;
    }
};
int main()
{
    derived d1;
    derived d2(20, 30);
    cout << "DEfault Constructor:";
    d1.disp();
    cout<<"Parameterized Constructor:";
    d2.disp();
}
