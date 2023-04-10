#include <iostream>
#include<string.h>
using namespace std;
class book
{
    string name;
    string auth;
    int price;
    public:
    void input()
    {
        cin>> name>>auth>> price;
    }
    friend void display(book *b, int n, int l, int u)
    {
        int k=0;
        cout << "Name:\tAuthor:\tPrice:"<< endl;
        for(int i= 0;i<n; i++)
        {
            if(l<b[i].price && u>b[i].price)
            {
                k=1;
                cout<<b[i].name<<"\t"<<b[i].auth<<"\t"<<b[i].price<<endl;
            }
        }
        if(k==0) cout<<"No books in range/invalid range";
    }
};
int main()
{
    int n, l, u;
    cout<<"Enter no of books: ";
    cin>>n;
    cout << "Enter price range: ";
    cin>>l>>u;
    book b[n];
    for(int i=0; i<n;i++)
    {
        cout<<"Enter details for book "<<i+1<< endl;
        b[i].input();
    }
    display(b, n, l, u);
}