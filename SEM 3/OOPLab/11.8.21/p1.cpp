#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cout<< "Enter the no of elements: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[i])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
        }
    }
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}