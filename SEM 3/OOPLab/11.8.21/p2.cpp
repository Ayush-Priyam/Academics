#include <iostream>
using namespace std;
int prime(int);
int main()
{
    int n, k=0;
    cout << "Enter the no: ";
    cin >> n;
    for (int i = 1; i <= n/2; i++)
    {
        if(prime(i)==1 && prime(n-i)==1)
        {
            cout <<n<<"= "<<i<<"+"<<n-i<<endl;
            k=1;
        }
    }
    if(k==0) 
        cout<<"Cant calculate";
    cout << endl;
    return 0;
}
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