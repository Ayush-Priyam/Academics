#include <iostream>
using namespace std;
int main()
{
    int n, x, max, me;
    cout << "Enter the no of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        x=0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i]== a[j])
            {
                x++;
            }
        }
        if(max<x)
        {
            max=x; 
            me=a[i];
        }
    }
    cout << "Most occuring element in the array: "<<a[me];
    return 0;
}