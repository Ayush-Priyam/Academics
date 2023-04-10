#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int roll;
    string name;
public:
    student()
    {
    }
    student(int a, string b)
    {
        roll = a;
        name= b;
    }
    void show()
    {
        cout << "roll = " << roll << "\nname is " << name << endl;
    }
    void *operator new(size_t size)
    {
        cout<<"User Defined new operator called\n";
        //void *p;
        // p = :: operator new(size); //also works
        void *p = (void *)malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "user defined delete operator called" << endl;
        free(p);
    }
};
int main()
{
    student *s = new student(1, "abcd");
    s->show();
    delete s;
    return 0;
}
