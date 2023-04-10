// detecting end of file
using namespace std;
#include <iostream>
#include <fstream>
int main()
{
    char ch1[20], ch2;
    ofstream out;
    out.open("abc.txt"); // file opened in write mode using open() function method
    out << "hello how are you";
    out.close();
    ifstream in("abc.txt"); // file opend in read mode using constructor method
    // method1 using ifstream object(in)
    while(in) //this retuns true when it finds a character and returns false(0) when it reaches end of file.
    {
        cout << ch2; // prints to output screen
        in.get(ch2);   // reads the first charcter and auto increments to next
    }
    // method2 using eof function
    // while (!in.eof()) // in.eof() retuns false(0) when it finds a character and returns true(1) when it reaches end of file.
    // {
    //     cout << ch2; // prints to output screen
    //     in >> ch2;   // reads the first charcter and auto increments to next
    // }

    return 0;
}