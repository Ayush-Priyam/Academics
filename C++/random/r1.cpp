#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {7, 5, 6, 12, 35};

    cout << "The numbers are: ";

    //  Printing array elements
    // using range based for loop
    for (const int &n : numbers)
    {
        cout << n << "  ";
    }
}