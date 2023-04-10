#include <iostream>
using namespace std;
class metre
{
public:
    int m;
    int cm;
    void dist()
    {
        cout << "Enter the distance in metre and centimeter: ";
        cin >> m >> cm;
        m= m+ cm/100;
        cm= cm%100;
    }
    friend void compare();
} me;
class feet
{
public:
    int f;
    int in;
    void dist()
    {
        cout << "Enter the distance in feet and inches: ";
        cin >> f >> in;
    }
    friend void compute();
} fe;
void compare()
{
    float ma, fa;
    ma = me.m*100 + me.cm;
    fa = fe.f * 30.48 + fe.in * 2.54;
    if (ma > fa)
        cout << "Greater Distance: " << me.m << " m " << me.cm << " cm" << endl;
    else if (ma == fa)
        cout  << "Both are equal: "<< me.m << " m " << me.cm << "cm and"<< fe.f << " ft " << fe.in << " inches." << endl;
    else
        cout << "Greater Distance: " << fe.f << " feet " << fe.in << " inches." << endl;
}

int main()
{
    me.dist();
    fe.dist();
    compare();
    return 0;
}