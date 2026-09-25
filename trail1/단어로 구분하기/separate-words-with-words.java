import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();

        for (int i = 0 ; i < line.length() ; i++) {
            char tmp = line.charAt(i);
            if (tmp == ' ') {
                System.out.println();
                continue;
            }
            System.out.printf("%c", tmp);

        }
    }
}