#include <iostream>
using namespace std;
class test
{
    public:
    test()
    {
        cout << "Constructor called"<<endl;
    }
    test(int a, int b)
    {
        cout << "Parameterized Constructor called" << endl;
    }
    test(test &a)
    {
        cout<<"Copy constructor called"<<endl;
    }
    void inpcc(test a)
    {}
    ~test()
    {
        cout << "Deallocating memory" << endl;
    }
};
int main()
{
    test c1;
    test c2(5, 6);
    test c3;
    c3.inpcc(c2);
}