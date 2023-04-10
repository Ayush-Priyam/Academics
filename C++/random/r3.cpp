#include <iostream>
using namespace std;
int main()
{
    int m, n,s;
    cout << "enter dimension: ";
    cin >> m >> n;
    int a[m][n], i, j;
    cout << "Enter element:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Search Element: ";
    cin >> s;
    for (i = m - 1; i >= 0; i--)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == s)
            {
                cout << "position of " << s << " is "
                     << "(" << i << ", " << j << ")";
                     return 0;
            }
            
        }
    }
        cout << "Not Found";
}