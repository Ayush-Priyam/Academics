#include <iostream>
using namespace std;
 class one
{
private:
int y=1;
public:
    
    void display1()
    {
        cout<<"one="<<y<<endl;
    }
};
class two : virtual public one
{
    
    public:
    int z=5;
    void display()
    {
        cout<<"two="<<z<<endl;
    }
};
class three : virtual public one
{
    int a = 10;

public:
    void display()
    {
        cout << "three=" << a << endl;
    }
};
class four : public three, public two
{
    int a = 14;

public:
    void display()
    {
        cout << "four=" << a << endl;
    }
};
int main()
{
    two t;
    t.display();
    t.one::display1();
    three th;
    th.display();
    th.one::display1();
    four f;
    f.display();
    f.display1();
}