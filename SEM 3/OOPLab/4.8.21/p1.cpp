#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two variables to swap: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nSwapped numbers= "<<a<<" and "<<b;
}