#include <iostream>
using namespace std;
template <typename T1, typename T2>
void display(T1 a, T2 b)
{
    cout << a << "\t" << b << endl;
}
int main()
{
    display<int, float>(1005, 2.997);
    display<string, int>("Hello", 45);
    return 0;
}
