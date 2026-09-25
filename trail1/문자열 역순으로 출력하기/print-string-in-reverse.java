import java.util.*;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        ArrayList<String> list1 = new ArrayList<>();
        for (int i = 0 ; i < 4 ; i++) {
            list1.add(sc.next());
        }
        for (int i = 3 ; i > -1 ; i-- ) {
            String tmp = list1.get(i);
            System.out.println(tmp);
        }
        
    }
}