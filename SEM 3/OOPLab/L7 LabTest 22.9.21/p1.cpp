#include <iostream>
using namespace std;
class base1
{
    int a;
public:
    base1()
    {
        cout << "base class 1 default constructor" << endl;
    }
    ~base1()
    {
         cout<<"base class destructor"<<endl ;
    }
};
class base2
{
    int b;

public:
    base2()
    {
        cout << "base class 2 default constructor" << endl;
    }
    ~base2()
    {
        cout << "base class 2 destructor" << endl;
    }
};
class derived :public base1 , virtual public base2
{
    int c;
public:
    derived()
    {
        cout << "derived class defAult constructor" << endl;
    }
    ~derived()
    {
        cout<<"derived class destructor"<<endl ;
    }
};
int main()
{
    derived d;
    return 0;
}
