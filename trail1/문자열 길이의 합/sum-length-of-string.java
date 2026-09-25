import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int cnt = sc.nextInt();

        int sum_len = 0;
        int a_cnt = 0;

        while (cnt-->0) {
            String tmp = sc.next();
            sum_len += tmp.length();
            if (tmp.startsWith("a")) a_cnt++;

        }
        System.out.printf("%d %d", sum_len, a_cnt);
    }
}