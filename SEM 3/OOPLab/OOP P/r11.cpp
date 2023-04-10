/*  Program Name: To convert a binary number to its hexadecimal equivalent
    Program Author: Sayantan Bose
*/
#include <iostream>
using namespace std;

//Function to convert binary number to its hexadecimal equivalent
void solve(int num)
{
    long int hexa_val = 0, i = 1, r;
    while (num != 0)
    {
        r = num % 10;
        hexa_val = hexa_val + r * i;
        i = i * 2;
        num = num / 10;
    }
    cout << "Equivalent hexadecimal value: " << hexa_val;
}

//Main function
int main()
{
    long int num;

    cout << "Enter the binary number: ";
    cin >> num;
    solve(num);
    return 0;
}