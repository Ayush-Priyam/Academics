#include <iostream>
using namespace std;
class dist
{
    int feet, inch;

public:
    void get()
    {
        cout << "\n Enter Distances in INCHES and FEET: ";
        cin >> inch >> feet;
    }

    void show()
    {
        cout << "\t Feet : " << feet << "\t\t Inches : " << inch;
        cout << endl;
    }

    dist operator+(dist &d)
    {
        dist temp;
        temp.inch = inch + d.inch;
        temp.feet = feet + d.feet;
        if (temp.inch >= 12)
        {
            temp.feet++;
            temp.inch -= 12;
        }
        cout<<temp.feet<<temp.inch;
        return temp;
    }
};
int main()
{
    dist d1, d2, d3;
    cout << "\n Enter the 1st distance :";
    d1.get();
    cout << "\n Enter the 2nd distance :";
    d2.get();
    cout << "\n EMPLOYEE DETAILS WITH NEW SALARY : ";
    d3 = d1 + d2;
    cout << "SUM = ";
    d3.show();
}