////*Create a class which stores a complex number(real and imaginary part). Add two objects and display the resultant object.
//Overload the post increment and pre decrement operator for the class.*/
#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void input()
    {
        
    }
    void disp()
    {
    }
    friend complex operator+(complex d1, complex d2)
    {
        complex c;
        c.r = d1.r + d2.r;
        c.i = d1.i + d2.i;
        return c;
    }
    friend void operator>>(istream &k, complex &b)
    {
        cout << "Enter real and imaginary part: ";
        cin >> b.r >> b.i;
    }
    friend void operator<<(ostream &k, complex b)
    {
        cout << b.r << "+ " << b.i << "i" << endl;
    }
    friend void operator--(complex &m)
    {
        --m.r;
    }
    friend void operator++(complex &m, int a)
    {
        ++m.r;
    }
};
int main()
{
    complex c1, c2,c3;
    cin>>c1;
    cin>>c2;
    cout<<c1;
    cout<<c2;
    c3= c1+c2;
    cout<<"Total: "<<c3;
    c2++;
    cout<<c2;
    --c2;
    cout<<c2;
}