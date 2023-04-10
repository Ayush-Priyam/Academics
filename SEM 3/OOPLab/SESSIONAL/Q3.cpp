/*Q.3. Write a program to overload the pre decrement  and post increment operator using friend function concept.
Also print the details after the overloading is performed.

Then overload the  pre decrement using member function and post increment operator friend function. 
Also print the details after the overloading is performed accordingly.*/
using namespace std;
#include <iostream>
class Test
{
private:
    int a;

public:
    Test()
    {
        a=0;
    }
    Test(int k)
    {
        a = k;
    }
    // void operator--()//pre decrement
    // {
    //     a--;
    // }
    friend void operator--(Test &T) // pre decrement
    {
        T.a--;
    }
    friend void operator++(Test &T, int c)//post incrementt
    {
        T.a++;
    }
    void display()
    {
        cout << "Current Value is: " << a << endl;
    }
};
int main()
{
    Test t(5);
    --t;
    cout<<"Performed pre decrement\n";
    t.display();
    t++;
    cout << "Performed post Increment\n";
    t.display();
}