#include <iostream>
using namespace std;
class sWaP
{
    int a,b;

public:
    void input()
    {
        cout << "Enter nos: ";
        cin >> a>>b;
    }
    void display()
    {
        cout << "Value= " << a <<", "<<b<< endl;
    }
    friend void swapp(sWaP &s)
    {
        int x = s.a;
        s.a = s.b;
        s.b = x;
    }
};
int main()
{
    sWaP s1;
    s1.input();
    s1.display();
    cout << "----Swapping----" << endl;
    swapp(s1);
    s1.display();
}