#include <iostream>
using namespace std;
int main()
{
    try{
        int n;
        cin >> n;
        if (n > 9999999999 || n <= 999999999)
            throw 1;
        if (n % 1000 == 0)
            throw 4;
        if(n/100000000)
            throw 3;
        cout<<"Accepted";
    }
    catch(int k)
    {
        if(k==1)
            cout<<"Number either too small or large";
        if(k==2)
            cout<<"Number has 4 zeros at thr last";
        if(k==4)
            cout<<"";
    }
}