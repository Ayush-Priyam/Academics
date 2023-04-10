/*Write a program in C++ to create a class to take student subject marks and name (dynamically as per users input) 
for two students at the time of creation of objects.  Display the details of two students along with the 
average mark by calling member function.Also deallocate the memory using destructor function.*/
#include <iostream>
using namespace std;
class student
{
    char* name;
    int *m;
public:
    float avg;
    student()//dynamic initialization at the time of object creeation
    {
        name= new char[20];
        m= new int[3];
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter 3 subject marks:";
        cin >> m[0] >> m[1] >> m[2];
        cout<<endl;
    }
    ~student()
    {
        cout<<"Memory Deallocated"<<endl;
    }
    void average()
    {
        avg = (m[0] +m[1]+ m[2])/3.0;
    }
    void display()
    {
        cout <<"\t\t"<< name << "\t" << m[0] << "\t" << m[1] << "\t" << m[2] << "\t" << avg <<endl;
    }
};
int main()
{
    student s1, s2;
    s1.average();
    s2.average();
    cout << "\t\tName\tMark1\tMark2\tMark3\tAverage\n";
    //cout<<"\t\t---------------------------------------"<<endl;
    s1.display();
    s2.display();
    cout<<endl;
}
