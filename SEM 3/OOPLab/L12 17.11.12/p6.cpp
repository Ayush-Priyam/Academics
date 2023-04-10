#include <iostream>
using namespace std;
int main()
{
    try
    {
        int x;
        cout << "enter an integer value and greater than 0 and less than 200: ";
        cin >> x;
        if(x==0)
            throw 1;
        if(x<0)
            throw 'a';
        if(x>=200)
            throw "Xyz";
    }
    catch(int x)
    {
        cout<<"Value is 0\n";
    }
    catch(char x)
    {
        cout<<" Value is negative\n";
    }
    catch(...)
    {
        cout<<"Value is too large";
    }
}
