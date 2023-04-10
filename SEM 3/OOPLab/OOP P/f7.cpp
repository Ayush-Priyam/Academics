#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    char c1[20], c2[20];
    int i, k=0;
    ofstream out;
    out.open("file2.txt");
    cout << "Enter the word: ";
    cin >> c1;
    out << c1;
    out.close();
    for(i= strlen(c1)-1; i>=0; i--)
    {
        c2[k++]= c1[i];
    }
    cout<<c2;
    out << c1;
    out.close();
    out.open("file3.txt");
    out<<c1;
    out<<" ";
    out<<c2;
    cout<<"Contents appended";
}