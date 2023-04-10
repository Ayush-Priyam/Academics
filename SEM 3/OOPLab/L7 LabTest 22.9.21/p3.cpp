#include <iostream>
using namespace std;
class base
{
    int a;

public:
    base()
    {
        a = 10;
    }
    base(int d)
    {
        a = d;
    }
    void display()
    {
        cout << "base data " << a<<endl;
    }
};
class derived : public base
{
    int b;

public:
    derived()
    {
        b=5;
    }
    derived(int d) : base(40)
    {
        b = d;
    }
    void display()
    {
        cout << "derived data " << b<<endl;
    }
};
int main()
{
    derived d(150);
    d.display();
    d.base::display();
    
    derived d2;
    d2.display();
    d2.base::display();
    return 0;
}
