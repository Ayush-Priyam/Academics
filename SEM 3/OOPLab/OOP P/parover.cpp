#include <iostream>
using namespace std;
class TwoDim
{
private:
    int x,y;
public:
    TwoDim()
    {
        x =y = 0;
    }
    TwoDim(int a, int b)
    {
        x = a;
        y = b;
    }
    TwoDim operator()(int a, int b, int c)
    {
        TwoDim D;
        D.x = a * c;
        D.y = b * c;
        return D;
    }
    void display()
    {
        cout << "(x,y)=(" << x << "," << y <<")" << endl;
    }
};
int main()
{
    TwoDim D1(11, 10), D2;
    cout << "First point: ";
    D1.display();
    D2 = D1(5, 8, 10);
    cout << "Second point:";
    D2.display();
    D1.display();
    return 0;
}