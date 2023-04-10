// file pointers and manipulators
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int k;
    char ch;
    ofstream out;
    out.open("abc.txt", ios::out); // ios::out is default argument in write mode
    // lets read the initial position after opening in write mode
    k = out.tellp();
    cout << "current position is at: " << k << endl;
    out << "abcdefgh";
    k = out.tellp();
    cout << "after writing.... position is at: " << k << endl;
    out.close();

    // opening file in read mode
    ifstream in;
    in.open("abc.txt", ios::in); //  ios::in ..the default argument

    // lets read the current location after opening the file in read mode
    k = in.tellg();
    cout << "after opening..current position is at: " << k << endl;

    in >> ch;
    in >> ch;
    in >> ch;
    k = in.tellg();
    cout << "after reading thrice..current position is at: " << k << endl;

    // reading 4th (3+1) character directly. So it will read d
    in.seekg(3, ios::beg);
    in.get(ch);
    cout << ch << endl;

    // reading 2nd character from end..so it'll read g
    in.seekg(-2, ios::end);
    in.get(ch);
    cout << ch << endl;
    // k = in.tellg();
    // cout << "after reading thrice..current position is at: " << k << endl;
}