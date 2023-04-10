#include <iostream>
using namespace std;
int main()
{
    try
    {
        int n,i;
        cout<<"Enter size: ";
        cin>>n;
        int a[n];
        cout << "enter the nos: ";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter index to extract value: ";
        cin>>i;
        if (i>=n)
            throw 1;
        else
            cout << "Value in a["<<i<<"]= "<<a[i];
    }
    catch (int k)
    {
        cout << "Array index out of bound ";
    }
    return 0;
}
