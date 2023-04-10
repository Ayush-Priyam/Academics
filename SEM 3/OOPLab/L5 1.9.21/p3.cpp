#include <iostream>
using namespace std;
class student;
class marks;
class student
{
    string name;
    int roll;
    public:
    friend void displaybff(student, marks);
    void displaymbf(marks);
    void input()
    {
        cout<<"Enter name and roll number: ";
        cin>>name>>roll;
    }
    
};
class marks
{
    int m[3];
    public:
    friend void displaybff(student, marks);
    friend void student ::displaymbf(marks);
    void input()
    {
        cout<<"Enter 3 marks: ";
        cin >> m[0] >> m[1] >> m[2];
    }
};
void displaybff(student s, marks ma)
{
    float avg= (ma.m[0]+ma.m[1]+ma.m[2])/3.0;
    cout << s.name << "\t" << s.roll << "\t" << ma.m[0] << "\t" << ma.m[1] << "\t" << ma.m[2] << "\t"<<avg<<endl;
}
void student:: displaymbf(marks ma)
{
    float avg = (ma.m[0] + ma.m[1] + ma.m[2]) / 3.0;
    cout << name << "\t" << roll << "\t" << ma.m[0] << "\t" << ma.m[1] << "\t" << ma.m[2] << "\t" << avg<<endl;
}
int main()
{
    student s1,s2;
    marks ma1, ma2;
    s1.input();
    ma1.input();
    s2.input();
    ma2.input();
    cout << "\nPrinting using friend fn to both class\nName\tRoll\tMark1\tMark2\tMark3\tAverage" << endl;
    displaybff(s1,ma1);
    displaybff(s2,ma2);
    cout << "\nPrinting using friend fn to marks class and member fn to student class\nName\tRoll\tMark1\tMark2\tMark3\tAverage" << endl;
    s1.displaymbf(ma1);
    s2.displaymbf(ma2);
}
