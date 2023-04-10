#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int I = 1, m = 2, n = 3, k;
    char s[] = "Hello\0hi";
    k = (I, m, n);
    cout << k << " "<<strlen(s)<<" "<<sizeof(s);
    return 0;
}