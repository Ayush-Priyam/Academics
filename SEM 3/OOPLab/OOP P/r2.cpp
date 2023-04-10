#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int i;

public:
    student() {}
    student(int a)
    {
        i= a;
    }
    void show()
    {
        cout << "name is " << i << endl;
    }
    ~student()
    {
        cout << "destructor is called" << endl;
        delete &i;
    }
};
int main()
{
    int y;
    cout << "enter  ";
    cin >> y;
    student s1(y);
    s1.show();
    cout << "enter the name ";
    cin >> y;
    student s2(y);
    s2.show();

    return 0;
}
