import java.util.*;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int max_len = Integer.MIN_VALUE;
        int min_len = Integer.MAX_VALUE;

        for (int i = 0 ; i < 3 ; i++) {
            String tmp = sc.next();
            int tmp_len = tmp.length();

            if (tmp_len > max_len) max_len = tmp_len;
            if (tmp_len < min_len) min_len = tmp_len;

        }

        System.out.println(max_len - min_len);
    }
}