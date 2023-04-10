#include <iostream>
using namespace std;
int main()
{
    int numbers[2][3];
    int e,fl=0;
    cout << "Enter 6 numbers: " << endl;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> numbers[i][j];
        }
    }
    cout << "Enter a number: " << endl;
    cin >> e;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if(numbers[i][j]==e) { fl=1; break;}
        }
    }
    if(fl==0) cout<< "not found";
    else
        cout << "found";
    return 0;
}