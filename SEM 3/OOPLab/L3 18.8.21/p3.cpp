#include <iostream>
using namespace std;
class power
{
public:
    inline int square(int n)
    {
        return n * n;
    }
    inline int cube(int n)
    {
        return n * n * n;
    }
};
int main()
{
    int n;
    power p;
    cout <<"\nEnter a no: \n" ;
    cin >> n;
    cout <<"Square= "<< p.square(n) << endl;
    cout <<"Cube= " <<p.cube(n) << endl;
}