#include <iostream>
#include <string.h>
using namespace std;
template<class T>
class example
{
    T a;
public: 
    example(){}
    example(T x)
    {
        a=x;
    }
    void fun(T a)
    {
        cout << "Template fn\n";
    }
    void fun(double b)
    {
        cout << "Overloaded template fn\n";
    }
};
int main()
{
    example<int> e(7);
    e.fun(1);
    e.fun(2.2);
}