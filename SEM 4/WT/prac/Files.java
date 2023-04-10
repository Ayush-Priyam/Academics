import java.io.*;
import java.util.*;
class student {
    int roll;
    String name;

    student(int roll, String s) {
        this.roll = roll;
        this.name = s;
    }
}
public class Files {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        String name;
        int r;
        File f = new File("abc.txt");
        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("enter a name");
            name = sc.next();
            System.out.println("enter roll");
            r = sc.nextInt();
            student s = new student(r, name);
            PrintWriter f1 = new PrintWriter(f);
            f1.println(s.name);
            f1.println(s.roll);
            f1.close();
            sc.close();
        } catch (Exception e) {
            System.out.println(e);
        }
        try {
            //File f1 = new File("abcgf.txt");
            Scanner in = new Scanner(f);
            String s1 = in.nextLine();
            int a = in.nextInt();
            System.out.println(s1 + "\nroll:" + a);
            in.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}