using namespace std;
#include <iostream>
#include <fstream>
int main()
{
    int i=1,k=5;
    char ch1[20], ch2, ch3[20];
    ofstream out;
    out.open("abcd.txt"); // file opened in write mode using open() function method
    cin.getline(ch1, 20);
    out<<ch1;
    out.close();
    out.open("abc.txt");
    ifstream in("abcd.txt"); // file opend in read mode using constructor method
    cout<<"current pos"<<in.tellg();
    while(k!=1)
    {
        in.seekg(-(i++), ios::end);
        in.get(ch2);
        cout<<ch2;
        out<<ch2;
        k = in.tellg();
        //i++;
    }
}
// using namespace std;
// #include <iostream>
// #include <fstream>
// int main()
// {
//     int i = 1, k = 5;
//     char ch1[20], ch2;
//     ofstream out;
//     out.open("abc.txt"); // file opened in write mode using open() function method
//     cin.getline(ch1, 20);
//     out << ch1;
//     out.close();
//     out.open("abc.txt");
//     ifstream in("abcd.txt"); // file opend in read mode using constructor method
//     cout << "current pos" << in.tellg();
//     while (in)
//     {
//         in.get(ch2);
//         cout << ch2;
//         out << ch2;
//     }
// }