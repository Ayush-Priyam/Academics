#include<iostream>
#include <string.h>
using namespace std;

void check (char ch[], int s )
{
    int c;
    try
    {
        if ( (ch[0] >= 'a' && ch[0] <= 'z') || (ch[0] >= 'A' && ch[0] <= 'Z') )
            cout<<"\nfirst letter okay";
        else 
            throw 5;

        if( ch[s-4] == '.'&& ch[s-3] == 'c' && ch[s-2] == 'o' && ch[s-1] == 'm')
            cout<<"\n Mail Id contains .com in the end\n";
        else
            throw(5.5f);

        for(int i = 0; i < s; i++)
        {
            if(ch[i] == '@')
            {
                c++;
            }
        }
        if(c != 1)
            throw("abc");
        cout<<"mail accepted";
    }
    catch(const int a)
    {
        cout<<"\n Mail should start with alphabet ";
    }

    catch(const float b)
    {
        cout<<"\n Mail ID should have .com in the end ";
    }
    catch(const char* k)
    {
        cout<<"\n Mail should have only 1 @ ";
    }
    
}

int main()
{
    char c[15];
    cout<<"Enter Mail ID: "; 
    cin>>c;
    int s = strlen(c);
    cout<<s;
    // for(int i=0; i<s; i++)
    //  {
    //      cin>>c[i];
    //  }
    check(c, s);
    return 0;
}
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     try{
//     string s;
//     cout<<"Enter email: ";
//     cin>>s;
//     int l=s.length();
//     if(!isalpha(s[0]))
//         throw 1;
//     if(s.substr(l-4)!=".com")
//         throw 2;
//     if (s.find("@")== string::npos)
//         throw 3.9;
//     cout<<"Email Accepted";
//     }
//     catch(int k)
//     {
//         if(k==1)
//             cout<<"Doesnt start with an alphabet\n";
//         if(k==2)
//             cout<<"Doesnt end with .com\n";
//     }
//     catch(double k)
//     {
//         cout << "Doesnt contain @\n";
//     }
// }