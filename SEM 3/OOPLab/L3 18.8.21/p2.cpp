#include <iostream>
#include <math.h>
using namespace std;
class area
{
    public:
        void fun(int r)
        {
            float v = 3.14 * r * r;
            cout << "Area of circle: " << v;
        }
        void fun(int l, int b)
        {
            int v = l * b;
            cout << "Area of rectangle: " << v;
        }
        void fun(int a, int b, int c)
        {
            float s = (a + b + c) / 2;
            float v = sqrt(s * (s - a) * (s - b) * (s - c));
            cout << "Area of triangle: " << v;
        }
};
int main()
{
    area a;
    int c, l, b, h;
    cout << "Enter 1 for circle, 2 for rectangle, 3 for triangle: ";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "Enter radius of circle: ";
        cin >> l;
        a.fun(l);
        break;
    case 2:
        cout << "Enter breadth and length of rectangle: ";
        cin >> l >> b;
        a.fun(l, b);
        break;
    case 3:
        cout << "Enter 3 sides of a triangle: ";
        cin >> l >> b >> h;
        a.fun(l, b, h);
    }
}
