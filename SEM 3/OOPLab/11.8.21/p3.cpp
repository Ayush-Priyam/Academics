#include <iostream>
using namespace std;
int gcd(int , int);
int main()
{
    int a,b;
    cout << "Enter two nos: ";
    cin >> a >> b;
    cout << "GCD of " <<a<<" and "<<b<<" = "<< gcd(a,b)<<endl;
    return 0;
}
int gcd(int a, int b)
{
    if (b!= 0)
        return gcd(b, a % b);
    else
        return a;
}