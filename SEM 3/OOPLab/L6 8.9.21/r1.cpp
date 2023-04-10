#include <iostream>
using namespace std;
class time
{
    float h;
    float m;

public:
    time()
    {
        h = 12;
        m = 23;
    }
    void inp()
    {
        cout << "Enter the time in hh:mm : ";
        cin >> h >> m;
    }
    time(int a, int b = 0)
    {
        h = a;
        m = b;
    }
    time(time &a)
    {
        h = a.h;
        m = a.m;
    }
    void disp()
    {
        cout << "The time is: " << h << ":" << m << endl;
    }
    ~time()
    {
        cout << "Memory deallocated" << endl;
    }
};
int main()
{
    time a;
    a.disp();
    a.inp();
    a.disp();
    time b(3);
    b.disp();
    time c(b);
    b.disp();
    return 0;
}