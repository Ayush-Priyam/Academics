/*Q.6.Write a program to append the contents of a file in reverse order with a space in between. 
( For example if a file is having “ABCD”  then new content should be “ABCD DCBA”).*/
using namespace std;
#include <iostream>
#include <fstream>
#include <string.h>
int main()
{
    int i = 0, k = 5;
    char ch1[20], ch2, ch3[20];
    ofstream out;
    out.open("abcd.txt"); 
    cin.getline(ch1, 20);
    out << ch1;
    out.close();
    out.open("abc.txt");
    ifstream in("abcd.txt");
    out<<ch1;
    out<<" ";
    i=1;
    while (ch2 != ' ')
    {
        in.seekg(-i, ios::end);
        in.get(ch2);
        //cout << ch2;
        out << ch2;
        ch3[i - 1] = ch2;
        k = in.tellg();
        if (k == 1)
            break;
        i++;
    }
}