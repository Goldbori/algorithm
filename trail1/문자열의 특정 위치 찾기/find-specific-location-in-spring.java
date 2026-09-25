import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String target = sc.next();
        if (str.contains(target)) {
            System.out.println(str.indexOf(target));
            return;
        }
        System.out.println("No");
    }
}