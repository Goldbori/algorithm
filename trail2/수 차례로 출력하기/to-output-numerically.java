import java.util.Scanner;
public class Main {
    public static void recur_1(int n) {

        if (n == 0) return;
        System.out.printf("%d ", n);
        recur_1(n-1);
    }

    public static void recur_2(int n) {

        if (n == 0) return;
        recur_2(n-1);
        System.out.printf("%d ", n);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Please write your code here.
        recur_2(n);
        System.out.println();
        recur_1(n);
    }
}