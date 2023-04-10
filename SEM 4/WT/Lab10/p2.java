/*2. Write a java program to implement a stack class having methods push () and pop().
These methods must be designed to throw user defined exception when the stack is
empty or full.*/
import java.util.*;
class FullException extends Exception{}
class EmptyException extends Exception{}
class Stack 
{
    private int a[];
    private int top;
    int size;
    Stack(int s) 
    {
        size = s;
        top = -1;
        a = new int[s];
    }
    public int push(int v)  throws FullException
    {
        if (top == size - 1) 
        {
            throw new FullException();
        }
        a[++top] = v;
        return 0;
    }
    public int pop() throws EmptyException
    {
        if (top==-1) 
        {
            throw new EmptyException();
        }
        return a[top--];
    }
    public void display()
    {
        if(top==-1)
        {
            System.out.println("Cant display as Stack is empty");
        }
        System.out.print("Stack: ");
        for(int i=0; i<=top; i++)
        {
            System.out.print(a[i]+", ");
        }
        System.out.println();
    }
}
public class p2 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of stack: ");
        int n= sc.nextInt();
        Stack s= new Stack(n);
        try
        {
            while(true)
            {
                System.out.print("1. Push  2.Pop  3.Display  4:Exit \tEnter choice:");
                int c = sc.nextInt();
                switch (c) {
                    case 1:
                        System.out.print("Enter element: ");
                        int l = sc.nextInt();
                        s.push(l);
                        break;
                    case 2:
                        s.pop();
                        break;
                    case 3:
                        s.display();
                        break;
                    case 4:
                        System.out.println("Thankyou.");
                        System.exit(0);
                }
            }
        }
        catch(EmptyException e)
        {
            System.out.println("Underflow");
        }
        catch(FullException e)
        {
            System.out.println("Overflow");
        }
        sc.close();
    }
}
