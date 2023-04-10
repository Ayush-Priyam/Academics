#include <iostream>
using namespace std;
class time
{
    int hh, mm;

public:
    void input()
    {
        cout << "Enter hour, min: ";
        cin >>hh >> mm;
    }
    time()
    {
        hh = 5;
        mm = 12;
    }
    time(int a, int b=0)
    {
        hh = a;
        mm = b;
    }
    time(time &a)
    {
        hh = a.hh;
        mm = a.mm;
    }
    void inpcc(time a)
    {
        hh = a.hh;
        mm = a.mm;
    }
    ~time()
    {
        cout << "Deallocating memory" << endl;
    }
    void display()
    {
        cout << hh << ": " << mm << endl;
    }
};
int main()
{
    time c1;
    time c2(5, 6);
    time c3(8);
    time c4;
    c4.inpcc(c2);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
}