#include <iostream>
using namespace std;
int f(int *, int, int);
int main()
{
    int i, j, r, c,e, re;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int a[r][c];
    cout<< "Enter the elements of the matrix\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>> a[i][j];
        }
    }
    cout<< "\nInput the element to search: ";
    cin>> e;
    re= f(*a, r *c-1, e);
    if(re==1) cout<<"Found";
    else cout <<"Not Found";
    return 0;
}

int f(int *p, int n, int e)
{
    if(p[n]==e) return 1;
    else if(n==0) return 0;
    else return f(p,n-1,e);
 }