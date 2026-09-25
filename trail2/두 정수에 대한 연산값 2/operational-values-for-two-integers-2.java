import java.util.Scanner;

class Ref<T> {
    public T val;
    public Ref(T val) {
        this.val = val;
    }
}
public class Main {
    static void solve(Ref<Integer> a, Ref<Integer> b){
        a.val += 10;
        b.val *= 2;
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Ref<Integer> a = new Ref<>(sc.nextInt());
        Ref<Integer> b = new Ref<>(sc.nextInt());
        
        // Please write your code here.
        if (a.val < b.val) {
            solve(a,b);
            System.out.printf("%d %d", a.val, b.val);
            return;
        }solve(b,a);
        System.out.printf("%d %d", a.val, b.val);
    }
}