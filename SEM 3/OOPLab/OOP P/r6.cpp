#include <iostream>
using namespace std;
class B;
class A;
class A
{
private:
    int x;
public:
    friend void LCM(A, B);
    A(int a)
    {
        x = a;
    }
};

class B
{
private:
    int y;
public:
    friend void LCM(A, B);
    B(int b)
    {
        y = b;
    }
};
void LCM(A p, B o)
{
    int i;
    for(i=1;;i++)
    {
        if(i%o.y==0 && i%p.x==0)
        {
            printf("Lcm=%d", i);
            return;
        }   
    }
}
int main()
{
    int m, n;
    cout << "Enter two num:" << endl;
    cin >> m >> n;
    A ob1(m);
    B ob2(n);
    LCM(ob1, ob2);
    return 0;
}