import java.util.Scanner;

class temp extends Exception {}

public class A {
    String name;
    long phone;

    void funxn() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name and phone number");
        name = sc.nextLine();
        phone = sc.nextLong();
        sc.close();
    }

    public static void main(String[] args) {
        A obj = new A();
        try {
            obj.funxn();
            long x = obj.phone;
            int i, count = 1;
            for (i = 1; i <= 10; i++) {
                x = x / 10;
                if (x > 0)
                    count++;
            }
            if (count != 10) {
                System.out.println(count);
                throw new temp();

            }

        } catch (temp t) {
            System.out.println("Enter correct contact details");
        }
    }
}