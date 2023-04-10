//2. A subclass exception must appear before super-class exception. 
//Justify this with suitable Java programs.
class SuperClass 
{
    void method() throws RuntimeException 
    {
        System.out.println("SuperClass");
    }
}
class p2 extends SuperClass 
{
    //Exception is the parent of RuntimeException
    void method() throws RuntimeException
    {
        System.out.println("SubClass");
    }
    public static void main(String args[]) 
    {
        SuperClass s = new p2();
        s.method();
    }
}
