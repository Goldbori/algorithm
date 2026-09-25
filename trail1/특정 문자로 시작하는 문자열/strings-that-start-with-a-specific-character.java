import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int cnt = sc.nextInt();

        String[] arr = new String[cnt];

        for (int i = 0 ; i < arr.length ; i++ ) {
            arr[i] = sc.next();
        }
        String start = sc.next();
        int ans = 0;
        int sum = 0;
        for (int i = 0 ; i < arr.length ; i++ ) {
            if(arr[i].startsWith(start)) {
                ans++;
                sum += arr[i].length();
            }
        }
        float avg = (float) sum/ans;
        System.out.printf("%d %.2f", ans, avg);

    }
}