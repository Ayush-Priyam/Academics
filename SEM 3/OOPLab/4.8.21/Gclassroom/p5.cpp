#include <iostream>
using namespace std;
int main()
{
    int n, max, min;
    cout << "Enter the no of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i==0)
            max=min=a[0];
        if (max < a[i])
            max =a[i];
        if(min> a[i])
            min=a[i];
    }
    cout << "Largest and the smallest element in the array: " << max<<" and "<<min;
    return 0;
}