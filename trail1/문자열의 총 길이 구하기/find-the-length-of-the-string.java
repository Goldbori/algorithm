import java.util.*;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        ArrayList<String> line = new ArrayList<String>(Arrays.<String>asList(sc.nextLine().split(" ")));
        int cnt = 0;

        for (int i = 0 ; i < line.size() ; i++ ) {
            cnt += line.get(i).length();
        }

        System.out.println(cnt);
    }
}