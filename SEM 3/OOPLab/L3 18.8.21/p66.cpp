#include <iostream>
using namespace std;
class demo
{
    int a, b;
    static int c;

public:
    void inp()
    {
        cout << "Enter three nos: ";
        cin >> a >> b >> c;
    }
    void show()
    {
        cout << a << "\t" << b << "\t" << c << endl;
    }
};
int demo::c;
int main()
{
    demo s1, s2;
    s1.inp();
    s2.inp();
    s1.show();
    s2.show();
}