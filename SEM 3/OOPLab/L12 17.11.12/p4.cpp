#include <iostream>
using namespace std;
int main()
{
    try
    {
        int a, b;
        cout << "Enter the numerator and denominator: ";
        cin >> a >> b;
        if (b == 0)
            throw b;
        else
            cout << a<<"/"<<b<<"= " << (a * 1.0) / b;
    }
    catch (int k)
    {
        cout << "Division not possible, Denominator is zero\n";
    }
    return 0;
}