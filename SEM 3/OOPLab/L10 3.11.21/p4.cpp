/*Create a class which allocates the memory for a string through dynamic constructor. 
Overload the binary + to concatenate two strings and display it.*/
#include <iostream>
using namespace std;
class str
{
    string *s;
    public:
    str()
    {
        string l;
        cout<<"Enter string: ";
        cin>>l;
        s= new string(l);
    }
    void disp()
    {
        cout<<*s<<endl;
    }
    void operator+(str k)
    {
        *s=*s+*(k.s);
    }
};
int main()
{
    str s1, s2;
    s1+s2;
    s1.disp();
}