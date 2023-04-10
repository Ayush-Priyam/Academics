#include <iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void input()
    {
        cout<<"Enter real, imaginary part: ";
        cin>>r>>i;
    }
    complex()
    {
        r=5;
        i=12;
    }
    complex(int a, int b)
    {
        r=a;
        i=b;
    }
    complex(complex &a)
    {
        r=a.r;
        i=a.i;
    }
    void inpcc(complex a)
    {
        r=a.r;
        i=a.i;
    }
    ~complex()
    {
        cout<<"Deallocating memory"<<endl;
    }
    void display()
    {
        cout<<r<<"+ "<<i<<"i"<<endl;
    }
};
int main()
{
    complex c1;
    complex c2(5,6);
    complex c3;
    c1.display();
    c3.inpcc(c2);
    
    c2.display();
    c3.display();
}