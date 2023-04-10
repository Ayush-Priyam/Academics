#include <iostream>
using namespace std;
void f(int a=10)
{
    cout<<a;
}
void f(int a, int b=6, int c=10)
{
    cout<<a+b+c;
}

int main()
{
    f(8,9);
}