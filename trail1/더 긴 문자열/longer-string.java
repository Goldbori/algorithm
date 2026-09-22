import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        String s = sc.next(); String s2 = sc.next();

        if (s.length() > s2.length()) {
            System.out.printf("%s %d", s, s.length());
            return;
        }
        if (s.length() == s2.length()) {
            System.out.println("same");
            return;
        }
        System.out.printf("%s %d", s2, s2.length());
    }
}