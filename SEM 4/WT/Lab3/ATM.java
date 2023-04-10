import java.util.*;
class ATM
{
    public static void main(String[] args) 
    {
        int bal = 10000, w, d, p;
        System.out.println("Enter Pin:");
        Scanner sc = new Scanner(System.in);
        p = sc.nextInt();
        while (p==1234) 
        {
            System.out.println("ATM\t1: Withdraw\t2: Deposit\t3: Check Balance\t4: exit");
            int c = sc.nextInt();
            switch (c) 
            {
                case 1:
                    System.out.print("Enter money to be withdrawn:");
                    w = sc.nextInt();
                    if (bal >= w) 
                    {
                        bal -= w;
                        System.out.println("Money Withdrawn\n New Balance: "+ bal+"\n");
                    } 
                    else 
                    {
                        System.out.println("Insufficient Balance\n");
                    }
                    break;

                case 2:
                    System.out.print("Enter Deposit Money: ");
                    d = sc.nextInt();
                    bal += d;
                    System.out.println("Money deposited\nNew Balance: " + bal + "\n");
                    break;

                case 3:
                    System.out.println("Current Balance : " + bal+ "\n");
                    break;

                case 4:
                    System.out.println("Thank You\n");
                    sc.close();
                    System.exit(0);
            }
        }
        System.out.print("Wrong Pin. Re-run\n");
    }
}