#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("abc.txt");
    out << "Hello";
    out.close();
    ifstream in;
    in.open("abc");
    char ch;
    in >> ch;
    cout << ch;
    in >> ch;
    cout << ch;
    return 0;
}