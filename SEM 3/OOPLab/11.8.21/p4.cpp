#include <iostream>
using namespace std;
void cbr(int & ,int & );
void cbv(int,int);
void cba(int*, int*);
int main()
{
    int a,b;
    cout<<"Enter two nos: ";
    cin>>a>>b;
    cbv(a,b);
    cout<<"\nNew Value after CBV: "<<a<<" and "<<b<< endl;
    cba(&a,&b);
    cout << "New Value after CBA: " << a <<" and "<< b<<endl;
    cbr(a,b);
    cout << "New Value after CBR: " << a << " and " << b << endl;
}
void cba(int *a, int *b) //call by address
{
    *a = *a * *b;
    *b= *a / *b;
    *a = *a / *b;
}
void cbv(int a, int b) //call by value
{
    a = a * b;
    b = a / b;
    a = a / b;
}
void cbr(int& a, int& b) //call by reference
{
    a = a * b;
    b = a / b;
    a = a / b;
}