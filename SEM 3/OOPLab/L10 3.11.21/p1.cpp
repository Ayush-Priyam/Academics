/*Write a program to overload binary +  operator for class distance, which stores the distance in feet and inches.
 -add two objects (D3=D1+D2)
 -Add an object to an integer, where the integer should be added to the inches value ( D2=4+D1)*/
#include <iostream>
using namespace std;
class dist
{
    int f, i;
    public:
    void input()
    {
        cout<<"Enter distance in feet and inches: ";
        cin>>f>>i;
    }
    void disp()
    {
        cout<<"Feet: "<<f<<"\tInches: "<<i<<endl;
    }
    void operator+(dist d)
    {
        i= i+d.i;
        f= f+d.f+i/12;
        i=i%12;
    }
    friend dist operator+(int i, dist d)
    {
        dist k;
        k.f= d.f+i;
        k.i=i;
        return k;
    }
};
int main()
{
    dist d1, d2;
    d1.input();
    d2.input();
    d2+d1;
    cout<<"Total Distance: \t";
    d2.disp();
    d2= 4+ d1;
    cout<<"New Distance: \t";
    d2.disp();
}