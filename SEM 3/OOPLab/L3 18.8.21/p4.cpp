#include <iostream>
using namespace std;
class swapp
{
public:
    void cbr(int &a, int &b) //call by reference
    {
        a = a * b;
        b = a / b;
        a = a / b;
    }
};
int main()
{
    swapp s;
    int a, b;
    cout << "Enter two nos: ";
    cin >> a >> b;
    s.cbr(a, b);
    cout << "New Value after CBR: " << a << " and " << b << endl;
}