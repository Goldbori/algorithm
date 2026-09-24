import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        ArrayList<String> list1 = new ArrayList<>();
        String tmp = sc.nextLine();
        StringTokenizer st = new StringTokenizer(tmp);
        while (st.hasMoreTokens()) {
            System.out.printf("%s", st.nextToken());
        }
        tmp = sc.nextLine();
        st = new StringTokenizer(tmp);
        while (st.hasMoreTokens()) {
            System.out.printf("%s", st.nextToken());
        }
    }
}