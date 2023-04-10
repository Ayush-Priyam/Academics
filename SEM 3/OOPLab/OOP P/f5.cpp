using namespace std;
#include <iostream>
#include <fstream>
#include<string.h>
int main()
{
    int i = 1, k = 5;
    char ch1[20], ch2, ch3[20];
    ofstream out;
    out.open("abcd.txt"); // file opened in write mode using open() function method
    cin.getline(ch1, 20);
    out << ch1;
    out.close();
    out.open("abc.txt");
    ifstream in("abcd.txt"); // file opend in read mode using constructor method
    cout << "current pos" << in.tellg()<<endl;
    while (ch2!=' ')
    {
        in.seekg(-i, ios::end);
        in.get(ch2);
        cout << ch2;
        out << ch2;
        ch3[i-1]=ch2;
        k = in.tellg();
        if(k==1) break;
        i++;
    }
    int l= strlen(ch3);
    cout<<endl<<1<<endl;
    for(i=l-2; i>=0; i--)
    {
        cout<<ch3[i];
    }
        cout<<endl<<ch3;
}