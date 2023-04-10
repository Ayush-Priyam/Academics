#include <iostream>
#include <string>
using namespace std;
struct student
{
    int roll;
    string name;
    string add;
};
int main()
{
    struct student s1;
    cout << "\nEnter name: ";
    getline(cin, s1.name);
    cout << "Enter address: ";
    getline(cin, s1.add);
    cout<<"Enter Roll Number: ";
    cin>>s1.roll;
    cout<<"\nName: "<<s1.name<<"\nRoll: "<<s1.roll<<"\nAddress: "<<s1.add;
}