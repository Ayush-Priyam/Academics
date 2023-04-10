#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b,c;
    float d,r1,r2;
    cout << "Input a, b, c for quadratic ax^2+bx+c ";
    cin >> a >> b>>c;
    d=sqrt(b*b-4*a*c);
    r1=(-1*b+d)/(2*a);
    r2=(-1*b - d) / (2 * a);
    cout << "The roots of the quadratic equation are "<<r1<<" and "<<r2;
}