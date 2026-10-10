import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        // Please write your code here.
        int cnt = 1;
        int ans = 1;
        int prev = arr[0];
        for (int i = 1 ; i < arr.length ; i++) {
            if (prev == arr[i]) {
                cnt++;
                if (cnt > ans) ans = cnt;
            }
            else {
                cnt = 1;
                prev = arr[i];
            }
        }
        System.out.println(ans);
    }
}