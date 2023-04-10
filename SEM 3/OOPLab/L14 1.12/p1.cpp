// Q.1 Write a program to count the number of words present in a file.
using namespace std;
#include <iostream>
#include <fstream>
int main()
{
    int c=0;
    char ch1[100], ch2;
    ofstream out;
    out.open("abc.txt");
    cout<<"Enter content to file: ";
    cin.getline(ch1, 100);
    out<<ch1;
    //out << "hello how are you";
    out.close();
    ifstream in("abc.txt");
    while (in)
    {
        in.get(ch2);
        if(ch2==' ')
            c++;
    }
    cout<<"No of words= "<<c+1<<endl;
}