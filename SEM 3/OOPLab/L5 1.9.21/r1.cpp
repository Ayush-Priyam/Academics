#include <iostream>
using namespace std;
class Nest
{
};
class Display : public Nest
{
private:
    int s;

public:
    void sum(int a, int b)
    {
        s = a + b;
    }
    void show()
    {
        cout << "\nSum of a and b is:: " << s;
    }
};
int main()
{
   Display x;
   x.sum(12, 10);
   x.show();
   return 0;
}