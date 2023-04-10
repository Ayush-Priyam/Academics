#include <iostream>
using namespace std;
template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << "\t" << b << endl;
}
int main()
{
    display(1, 2.997);
    display("Hello", 45);
    return 0;
}
