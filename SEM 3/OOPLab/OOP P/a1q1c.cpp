/*Write a program in C++ to create two classes separately each having one integer value 
as its private data member. Compare both the values and display in main functions whether 
the values are equal or not. Use pass by address method to execute the code*/
#include <iostream> 
using namespace std;
class second;
class first
{
    int n;
public:
    void input()
    {
        cout << "Input value for class 1: ";
        cin >> n;
    }
    friend bool compare(first *, second *);
};

class second
{
    int n;
public:
    void input()
    {
        cout << "Input value for class 2: ";
        cin >> n;
    }
    friend bool compare(first *, second *);
};

bool compare(first *f, second *s)
{
    if (f->n == s->n)
        return true;
    else
        return false;
}
int main()
{
    first f;
    second s;
    f.input();
    s.input();
    if (compare(&f, &s)) cout << "Equal";
    else cout << "Not Equal";
    return 0;
}