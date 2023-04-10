package pack1;
interface Person
{
    char calc_grade();
    void display_grade();
    void input();
}
class Employee implements Person
{
    int emp_code, contact, details;
    String name, des;
    public void input()
    {
        //input Statements
    }
    public char calc_grade()
    {
        int x= 91;
        if(x>=90)
            return 'O';
            if (x >= 80)
            return 'E';
        if (x >= 70)
            return 'A';
        if (x >= 60)
            return 'B';
        if (x >= 50)
            return 'C';
        else
            return 'F'; 
    }
    public void display_grade()
    {
        //nothing
    }
}