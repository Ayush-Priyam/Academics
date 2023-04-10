#include <iostream>
//#include <stdlib.h>
using namespace std;
class student
{
    int m[3];
    string name;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout<<"Enter 3 marks: ";
        cin>>m[0]>>m[1]>>m[2];
    }
    // void display()
    // {
    //     cout << "Name: " << name << endl;
    //     cout << "3 marks: " << m[0] << ", " << m[1] << ", " << m[2] << endl;
    // }
    void operator[](int k)
    {
        if(k==0)
            cout << "Name: " << name << "\n3 marks: ";
        cout<<m[k]<<", ";
    }
};
int main()
{
    student s;
    s.input();
    s[0];
    s[1];
    s[2];
    //s.display();
} // #include <iostream>
  // #include <stdlib.h>
// using namespace std;
// class student
// {
//     int m[3];
//     string name;
//     public:
//     void input()
//     {
//         cout<<"Enter name: ";
//         //cin>>m[0]>>m[1]>>m[2];
//         cin>>name;
//     }
//     void display()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout << "3 marks: " << m[0] << ", " << m[1] << ", " << m[2]<<endl;
//     }
//     int& operator[](int k)
//     {
//         return m[k];
//     }
// };
// int main()
// {
//     student s;
//     s.input();
//     s[0] = 40;
//     s[1] = 50;
//     s[2] = 80;
//     s.display();
// }