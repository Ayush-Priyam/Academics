#include <iostream>
using namespace std;
int main()
{

    int m, n, k = 0, l, x, s;
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
                k = 1;
                l = i;
                x = j;
                break;
            }
            
        }
    }

    if (k == 1)
        cout << "position of " << s << " is "
             << "(" << l << ", " << x << ")";

    else
        cout << "Not Found";
}