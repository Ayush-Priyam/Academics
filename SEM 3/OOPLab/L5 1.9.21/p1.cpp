#include <iostream>
using namespace std;
class sswapp
{
    int a;

    public:
    void input()
    {
        cout << "Enter no: ";
        cin >> a;
    }
    void display()
    {
        cout << "Value= " << a<< endl;
    }
    void swap(sswapp &s)
    {
        int x= a;
        a= s.a;
        s.a= x; 
    }
};
int main()
{
    sswapp s1, s2,s3;
    s1.input();
    s2.input();
    s3.input();
    s1.display();
    s2.display();
    s3.display();
    cout<<"----Swapping----"<<endl;
    s1.swap(s2);
    s2.swap(s3);
    s1.display();
    s2.display();
    s3.display();
}