#include <iostream>
using namespace std;
void fun(int);
void fun(int ,int );
void fun(int , int , int);
int main()
{
    int c, l,b,h;
    cout<<"Enter 1 for cube, 2 for cone, 3 for cuboid: ";
    cin>>c;
    switch(c)
    {
        case 1:
            cout<<"Enter side of cube";
            cin>>l;
            fun(l);
            break;
        case 2:
            cout<<"Enter Height and base radius of cone: ";
            cin>>h>>b;
            fun(h,b);
            break;
        case 3:
            cout<<"Enter length breadth height of cuboid: ";
            cin>>l>>b>>h;
            fun(l,b,h);
    }
}
void fun(int a)
{
    int v= a*a*a;
    cout<<"Volume of cube: "<<v;
}
void fun(int h, int r)
{
    float v= 3.14*r*r*h/3;
    cout<<"Vlume of cone: "<<v;
}
void fun(int l, int b, int h)
{
    int v= l*b*h;
    cout<< "Volume of cuboid: "<<v;
}