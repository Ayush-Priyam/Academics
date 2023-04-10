#include <iostream>
using namespace std;
class base
{
    int a;

public:
    base()
    {
        cout << "base class 1 default constructor" << endl;
    }
    ~base()
    {
        cout << "base class destructor" << endl;
    }
};
class derived1: public base
{
    int b;
public:
    derived1()
    {
        cout << "derived class 1 default constructor" << endl;
    }
    ~derived1()
    {
        cout << "derived class 1 destructor" << endl;
    }
};
class derived2 : public derived1
{
    int c;
public:
    derived2()
    {
        cout << "derived class 2 default constructor" << endl;
    }
    ~derived2()
    {
        cout << "derived class 2 destructor" << endl;
    }
};
int main()
{
    derived2 d2;
    return 0;
}
