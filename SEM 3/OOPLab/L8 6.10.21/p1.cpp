#include <iostream>
using namespace std;
class base
{
public:
    void show()
    {
        cout << "BASE class\n";
    }
};
class child1 : virtual public base
{
public:
    void disp1() 
    {
        cout<< "CHILD 1 class\n";
    }
};
class child2 : virtual public base
{
public:
    void disp2()
    {
        cout << "CHILD 2 class\n";
    }
};
class gchild : public child1, public child2
{};
int main()
{
    gchild g;
    g.show();
    g.disp1();
    g.disp2();
}