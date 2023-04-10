#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    if(a%10==b%10)
        cout << "The numbers have the same last digit";
    else
        cout << "The numbers dont have the same last digit";
}