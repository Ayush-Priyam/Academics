//Q .2 Write a program to create a file and input user defined value to it.
//Then append new contents and print all the contents from file to output screen.
using namespace std;
#include <iostream>
#include <fstream>
int main()
{
    int c = 0;
    char ch1[100], ch2;
    ofstream out;
    out.open("abc.txt");
    cout << "Enter content: ";
    cin.getline(ch1, 100);
    out << ch1;
    out<<"ADDED NEW Content";
    out.close();
    ifstream in("abc.txt");
    cout<<"\nFile contents: "<<endl;
    while (in)
    {
        cout << ch2;
        in.get(ch2);
    }
}