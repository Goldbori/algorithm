import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Please write your code here.
        ArrayList<Integer> arr = new ArrayList<>();
        while (n-->0) {
            String cmd = sc.next();
            if (cmd.equals("push_back")) {
                int tmp = sc.nextInt();
                arr.add(tmp);
            }
            else if(cmd.equals("pop_back")) {
                arr.remove(arr.size()-1);
            }
            else if(cmd.equals("size")) {
                System.out.println(arr.size());
            }
            else if(cmd.equals("get")) {
                int tmp = sc.nextInt();
                System.out.println(arr.get(tmp-1));
            }
        }
    }
}