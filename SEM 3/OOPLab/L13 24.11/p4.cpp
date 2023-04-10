//Q4.Write program to create a function template that swaps two values entered by the user.
#include <iostream>
using namespace std;
template <class T>
void swapp(T &a, T &b)
{
    T c= a;
    a=b;
    b= c;
}
int main()
{
    int a, b;
    cout << "Enter nos ";
    cin>>a>>b;
    cout << "Original: " << a << "\t" << b<<endl;
    swapp(a, b);
    cout<<"Swapped: "<<a<<"\t"<<b;
    return 0;
}