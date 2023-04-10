/*Write a program in C++ to create two classes separately each having one integer value 
as its private data member. Compare both the values and display in main functions whether 
the values are equal or not. Use pass by address method to execute the code*/
#include <iostream>
using namespace std;
class first
{
    int i;
    public:
    void input()
    {
        cout << "Input value for class 1: ";
        cin >> i;
    }
    friend int access1(first *a)
    {
        return a->i;
    }
};
class second
{
    int i;
    public:
    void input()
    {
        cout << "Input value for class 2: ";
        cin >> i;
    }
    friend int access2(second *a)
    {
        return a->i;
    }
};
int main()
{
    first f; second s;
    f.input();
    s.input();
    if(access1(&f)==access2(&s)) cout<<"Equal";
    else cout<<"Not Equal";
    return 0;
}