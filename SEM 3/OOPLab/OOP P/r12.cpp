#include <iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"DC base\n";
    }
    base(int k)
    {
        cout << "PC base\n";
    }
    ~base()
    {
        cout << "DS base\n";
    }
};
class base1
{
public:
    base1()
    {
        cout << "DC base\n";
    }
    base1(int k)
    {
        cout << "PC base\n";
    }
    ~base1()
    {
        cout << "DS base\n";
    }
};
class derived:public base, public base1
{
    public:
    derived():base(), base1()
    {
        cout << "DC der\n";
    }
    derived(int k): base(5)
    {
        cout << "PC der\n";
    }
    ~derived()
    {
        cout << "DS der\n";
    }
};
int main()
{
    derived d(20);
}
