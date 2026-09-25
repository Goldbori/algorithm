import java.util.Scanner;
public class Main {
    static void recur(int n) {
        if (n == 0) return;
        for (int i = 0 ; i < n ; i++) {
            System.out.printf("* ");
        }
        System.out.println();
        recur(n-1);
    }
    static void recur2(int n) {
        if (n == 0) return;
        recur2(n-1);
        for (int i = 0 ; i < n ; i++) {
            System.out.printf("* ");
        }
        System.out.println();
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Please write your code here.
        recur(n);
        recur2(n);
    }
}