#include <iostream>
using namespace std;
class largest
{
    int a, b;

public:
    void input(void);
    void display(void);
    int calculate(void);
};
int largest::calculate(void)
{
    if (a >= b)
        return (a);
    else
        return (b);
}
void largest::input(void)
{
    int a, b;
    cout << "\nEnter the values";
    cin >> a >> b;
}

void largest::display(void)
{
    cout << "\n The larger value is =" << calculate() << endl;
}