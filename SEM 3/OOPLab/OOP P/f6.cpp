#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out;
    ifstream in;
    char arr[80] = "KIIT UNIVERSITY";
    char ch;
    int i, j, n = 0;
    out.open("sample.txt");
    out << arr;
    out.close();
    cout << "enter i and j position: ";
    cin >> i >> j;
    in.open("sample.txt");
    for (int k = i; k < j; k++)
        {
            ch= arr[k];
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U')
            {
                n++;
            }
        }
    cout << "Total no. of vowels : " << n;
    return 0;
}