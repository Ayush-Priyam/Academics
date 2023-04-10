#include <iostream>
using namespace std;
class first
{
public:
    first()
    {
        cout << "Constructor of first class\n";
    }
    ~first()
    {
        cout<<"Destructor of first class\n";
    }
};
class second
{
    first f;
public:
    second()
    {
        cout << "Constructor of second class\n";
    }
    ~second()
    {
        cout<<"Destructor of second class\n";
    }
};
int main()
{
    second s;
}
