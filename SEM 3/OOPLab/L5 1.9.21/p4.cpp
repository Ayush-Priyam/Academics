#include <iostream>
using namespace std;
class count
{
    static int c;
public:
    count()
    {
        c++;
    }
    static void display()
    {
        cout << "Total no of objects: " << c <<endl;
    }
};
int count::c=0;
int main()
{
    count a,b,c,d;
    count::display();
    count e,f,g;
    count::display();
    count h;
    count::display();
    return 0;
}