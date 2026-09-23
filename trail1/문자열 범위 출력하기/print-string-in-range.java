import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        String my_string = sc.nextLine();

        for (int i = 2 ; i < 10 ; i++) {
            System.out.printf("%c",my_string.charAt(i));
        }
    }
}