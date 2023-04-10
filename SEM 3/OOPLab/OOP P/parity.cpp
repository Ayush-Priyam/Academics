#include <iostream>
using namespace std;

// Function to find the parity
bool findParity(int x)
{
    int y = x ^ (x >> 1);
    y = y ^ (y >> 2);
    y = y ^ (y >> 4);
    y = y ^ (y >> 8);
    y = y ^ (y >> 16);

    // Rightmost bit of y holds the parity value
    // if (y&1) is 1 then parity is odd else even
    if (y & 1)
        return 1;
    return 0;
}

// Driver code
int main()
{
    (findParity(629) == 0) ? cout << "Even Parity\n" : cout << "Odd Parity\n";
    return 0;
}