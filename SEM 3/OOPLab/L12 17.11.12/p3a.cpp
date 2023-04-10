#include <iostream>
using namespace std;
template <class T>
void sort(T a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (a[i] > a[j])
            {
                T x;
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int ia[n];
    float fa[n];
    cout << "Enter integers:";
    for (int i = 0; i < n; i++)
    {
        cin >> ia[i];
    }
    cout << "Enter decimals:";
    for (int i = 0; i < n; i++)
    {
        cin >> fa[i];
    }
    sort(ia, n);
    sort(fa, n);
    cout << "Sorted Integer Array :";
    for (int i = 0; i < n; i++)
    {
        cout << ia[i] << ", ";
    }
    cout << "\nSorted Float Array :";
    for (int i = 0; i < n; i++)
    {
        cout << fa[i] << ", ";
    }
    return 0;
}