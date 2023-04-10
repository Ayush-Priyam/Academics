#include <iostream>
using namespace std;
class stat
{
    int a, b;
    static int c;
public:
    void inp()
    {
        cout << "Enter two nos: ";
        cin >> a >> b >> c;
    }
    void show()
    {
        cout << a << "\t" << b << "\t" << c << endl;
    }
};
int stat::c;
int main()
{
    stat s1,s2;
    s1.inp();
    s2.inp();
    s1.show();
    s2.show();
}
