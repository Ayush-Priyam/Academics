class WrongPin extends Exception {}
class Blockpin extends Exception{}

class atm {
    public int bal, r, pin;

    atm(int a) {
        bal = a;
        r=3;
        pin=1234;
    }

    public void withdraw(int x)
    {
        if(x>bal)
            System.out.println("Cant withdraw");
        else
        {
            bal = bal - x;
            System.out.println(x + " Rs. withdrawn. Remaining Balnce: " + bal);
        }
    }

    public void deposit(int x) {
        bal = bal + x;
        System.out.println(x + " Rs deposited. Current updated Balnce: " + bal);
    }
    public void checkpin(int p) throws WrongPin, Blockpin
    {
        if(r<=0)
            throw new Blockpin();
        else if(p!=pin)
        {
            r--;
            throw new WrongPin();
        }
        else
        {
            System.out.println("PIN Accepted");
        }
    }
}

public class p1 {
    public static void main(String[] args) {
        atm a = new atm(2000);
        int x=1;
        for(int i=1232; i<=1234; i++)
        {
            x=1;
            try {
                a.checkpin(i);
            } catch (Blockpin e) {
                x=0;
                System.out.println("Card Blocked");
                System.exit(0);
            } catch (WrongPin e) {
                x=0;
                System.out.println("You have " + a.r + "attempts left");
            }
        }
        if(x==1){
            a.withdraw(1500);
            a.deposit(1000);
        }

    }
}
