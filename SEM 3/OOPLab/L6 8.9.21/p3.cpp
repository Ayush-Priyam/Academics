#include <iostream>
#include <string>
using namespace std;
class str
{
    string s;
    int l;
public:
    void input()
    {
        cout << "Enter string: ";
        cin >> s;
    }
    str()
    {
        s= "Hello";
        
    }
    str(string a)
    {
        s = a;
    }
    str(str &a)
    {
        s = a.s;
    }
    void add(str a)
    {
        s = s+ a.s;
    }
    ~str()
    {
        cout << "Deallocating memory" << endl;
    }
    void display()
    {
        l= s.length();
        cout <<"String: "<< s << "\t " << "Length:" << l << endl;
    }
};
int main()
{
    str c1;
    str c2("Parameterized Constructor");
    str c3;
    c3.input();
    c1.display();
    c2.display();
    c3.display();
    c3.add(c1);
    c3.display();
}