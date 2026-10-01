import java.util.Scanner;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Integer[] arr = new Integer[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        // Please write your code here.
        Arrays.sort(arr);
       // System.out.println(Arrays.toString(arr));
        for (int i : arr) {
            System.out.printf("%d ", i);
        }
        System.out.println();
        Arrays.sort(arr, Collections.reverseOrder());
        for (int i : arr) {
            System.out.printf("%d ", i);
        }
    }
}