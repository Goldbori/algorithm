import java.util.*;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String[] arr1 = new String[] {"apple", "banana", "grape", "blueberry", "orange"};
        char a = sc.next().charAt(0);
        int cnt = 0;
        for (int i = 0 ; i < 5 ; i++) {
            if (arr1[i].charAt(2) == a || arr1[i].charAt(3) == a) {
                cnt++;
                System.out.println(arr1[i]);
            }
        }
        System.out.println(cnt);
    }
}