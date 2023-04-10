// Part B 
#include<stdio.h>
#define SIZE 50
int S1[SIZE], S2[SIZE], S3[SIZE];
void accept(int S[], int n)
{
    Int I;
    For(I = 1; I <= n; I++)
        Scanf(“% d”, &S[I]);
    S[0] = n;
}

void display(int S[])
{
    Int n, I;
    N = S[0];
    cout <<“
    { “);
    For(I=1;I<=n;I++)
        cout<<“%d “,S[I]);
    cout <<“
    }”);
}

int ele_pre(int S[], int x)
{
    int n, I;
    N = S[0];
    for(I = 1; I <= n; I++)
        If(S[I] == x)
            Return 1;
    return 0;
}

void set_union(int S1[], int S2[])
{
    int n, I, m;
    n = S1[0];
    for (I = 1; I <= n; I++)
        S3[I] = S1[I];
    m = S2[0];
    for (I = 1; I <= m; I++)
        if (!ele_pre(S1, S2[I]))
            S3[++n] = S2[I];
    S3[0] = n;
}

void intersection(int S1[], int S2[])
{
    int n, I, j = 0;
    N = S1[0];
    for (I = 1; I <= n; I++)
        If(ele_pre(S2, S1[I]))
            S3[++j] = S1[I];
    S3[0] = j;
}

int main()
{
    Int n;
    cout <<“-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -“;
    cout <<“\nProgram to perform the Set operations”;
    cout <<“\n-- -- -- -- -- -- -- -- -- -- -- -- -“;
    cout<<“\nHow many elements for Set-1 “;
    scanf(“% d”, &n);
    cout <<“\nEnter elements\n”;
    accept(S1, n);

    cout<<“\nHow many elements for Set-2 “;
    Scanf(“% d”, &n);
    cout <<“\nEnter elements\n”;
    accept(S2, n);

    Set_union(S1, S2);
    cout <<“\nS1 U S2 = S3 = “;
    display(S3);

    intersection(S1, S2);
    cout <<“\nS1 ^ S2 = S3 = “;
    display(S3);
    cout <<“\n-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- - \n”;
}
