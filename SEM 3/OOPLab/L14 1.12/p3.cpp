using namespace std;
#include <iostream>
#include <fstream>
#include <string.h>
int main()
{
    int b, l, i, sl, k=1;
    char ch1[100], ch2, ch3[20];
    ofstream out;
    out.open("abc.txt");
    cout << "Enter content to file 1: ";
    cin.getline(ch1, 100);
    out << ch1;
    out.close();
    cout<< "Enter starting position and length of substring: ";
    cin>>b>>l;
    sl=strlen(ch1);
    if(b+l>=sl)
    {
        cout<<"Out of bounds input\n";
        //return 0;
    }
    out.open("abcd.txt");
    ifstream in("abc.txt");
    for(i=b; i<b+l; i++)
    {
        in.seekg(i, ios::beg);
        in.get(ch2);
        if(!in) break;
        cout << ch2;
        out << ch2;
    }
}