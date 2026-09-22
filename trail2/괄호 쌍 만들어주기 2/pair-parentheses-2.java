import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        // Please write your code here.
        int cnt = 0;
        for (int i = 0 ; i < A.length() - 4 ; i++) {
            if (A.charAt(i) == ')' || A.charAt(i+1) == ')') continue;

            for (int j = i + 2 ; j < A.length()-1 ; j++) {
                if (A.charAt(j) == '(' || A.charAt(j+1) == '(') continue;
                cnt++;
                // System.out.printf("(%d,%d)\n",i+1,j+1);
            }
        }
        System.out.println(cnt);
    }
}