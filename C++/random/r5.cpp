//WAP to calculate the factorial of a given number.
#include <iostream>
using namespace std;

int main()
{
    int number, factorial = 1;
    cout << "Enter Number To Find Its Factorial: ";
    cin >> number;

    if (number < 0)
        cout << "cant compute the value";
    else
    {
        for (int i = number; i >= 2; i--)
        {
            factorial = factorial * i;
        }
        cout << number << "!=" << factorial;
    }
    return 0;
}