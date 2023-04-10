#include <iostream>
using namespace std;
int prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout << "Input a number: ";
    cin >>n;
    for (int i = n-1; i >= 1; i--)
    {
        if (prime(i) == 1)
        {
            cout << "Last Prime number before "<<n<<": "<<i;
            return 0;
        }
    }
    cout<<"No primes found";
}