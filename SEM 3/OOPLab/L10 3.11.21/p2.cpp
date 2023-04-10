/*Create a class to store an integer array. Overload insertion and extraction operator to
input and display the array elements. */
#include <iostream>
using namespace std;
#define n 5
class arr
{
    int a[n];
    public:
    friend void operator>>(istream &k, arr &b)
    {
        cout<<"Input nos: \n";
        for(int i=0; i<n; i++)
        {
            k>>b.a[i];
        }
    }
    friend void operator<<(ostream &k, arr b)
    {
        cout << "Array: ";
        for (int i = 0; i < n; i++)
        {
            k << b.a[i]<<"\t";
        }
        cout<<"\n";
    }
};
int main()
{
    arr B;
    cin>>B;
    cout<<B;
}