#include <iostream>
using namespace std;
class base
{
    public:
    void f()
    {
        cout<<"base";
    }
};
 class derived: public base{
     public:
     void f()
     {
         cout<<"derived";
     }
 };
main()
{
    derived d;
    d.base::f();
}