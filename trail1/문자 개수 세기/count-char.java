import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String st = br.readLine();
        String s = br.readLine();
        char target = s.charAt(0);
        int cnt = 0;
        for (int i = 0 ; i < st.length() ; i++) {
            if (st.charAt(i) == target) cnt++;
        }

        System.out.println(cnt);

    }
}