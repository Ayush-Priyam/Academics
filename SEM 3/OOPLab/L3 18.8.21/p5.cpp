#include <iostream>
#include <math.h>
using namespace std;
class interest
{
public:
    float si;
    float ci;
    void fun(float p, float r, float t)
    {
        si = p*r*t*0.01;
    }
    void fun(float p, float r, float t, int a)
    {
        ci = p * pow((1 + r / 100), t);
    }
};
int main()
{
    interest i;
    float p,r,t;
    cout<<"Enter Principle, rate and time: ";
    cin>>p>>r>>t;
    i.fun(p,r,t);
    i.fun(p,r,t, 1);
    cout<<"SI= "<<i.si<<"\nCI="<<i.ci;
}

