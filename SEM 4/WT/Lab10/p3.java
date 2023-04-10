/*3. Write a java program to create Account with 500 rupee minimum balance,
deposit amount, withdraw amount and also throws LessBalanceException which
returns the statement that says withdraw amount is not valid.*/
class LessBalException extends Exception {}
class Account
{
    private int bal;
    Account(int a)
    {
        bal=a;
    }
    public void withdraw(int x) throws LessBalException
    {
        if(x+500>bal)
            throw new LessBalException();
        bal= bal-x;
        System.out.println(x+ " Rs. withdrawn. Remaining Balnce: "+bal);
    }
    public void deposit(int x)
    {
        bal=bal+x;
        System.out.println(x+ " Rs deposited. Remaining Balnce: "+bal);
    }
}
public class p3
{
    public static void main(String[] args)
    {
        Account a = new Account(1600);
        try 
        {
            a.withdraw(1500);
            a.deposit(1000);
        } 
        catch (LessBalException e) 
        {
            System.out.println("Cant withdraw as balance will be < 500");
            a.deposit(500);
        }
    }
}
