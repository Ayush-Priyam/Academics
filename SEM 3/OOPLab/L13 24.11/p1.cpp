#include <iostream>
using namespace std;
void div1(int a, int b)
{
    try{
        if(b==0)
            throw 0;
        else
            cout<<a/b<<endl;
    }
    catch(int k)
    {
        cout<<"Denominator is 0\n";
        throw;
    }
}
int main()
{
    try{
        int a, b;
        cout<<"Enter two nos: ";
        cin>>a>>b;
        div1(a, b);
    }
    catch(int k)
    {
        cout<<"Rethrown Exception";
    }
}
