#include <iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"Inbase"<<endl;
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"derived"<<endl;
    }
};
int main()
{
    derived D;
    derived *b=&D;
    b->display();
    b->base::display();
}