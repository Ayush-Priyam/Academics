#include <iostream>
#include <string>
using namespace std;
int main()
{
    try{
        cout<<"Enter phone no.: ";
        string n;
        cin>>n;
        if(n.length()!=10)
            throw 1;
        for(int i=0; i<11;i++)
        {
            if(!isdigit(n[i]))
                throw 2;
        }
        if(n[0]=='0')
            throw 3;
        if (n[6] == '0' && n[7]=='0' && n[8] == '0' && n[9]=='0')
            throw 4;
    }
    catch(int k)
    {
        if(k==1)
            cout<<"Not 10 dig\n";
        if(k==2)
            cout<<"Not digits\n";
        if(k==3)
            cout<<"first dig 0\n";
        if(k==4)
            cout<<"Last 4 dig 0";
    }
}