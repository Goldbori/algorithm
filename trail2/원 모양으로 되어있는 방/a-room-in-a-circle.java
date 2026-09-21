import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        long answer = Long.MAX_VALUE;

        // 시작 방 선택
        for (int start = 0; start < n; start++) {

            long sum = 0;

            // 각 방까지의 거리 계산
            for (int i = 0; i < n; i++) {

                int dist;

                if (i >= start) {
                    dist = i - start;
                } else {
                    dist = n - start + i;
                }

                sum += (long) arr[i] * dist;
            }

            answer = Math.min(answer, sum);
        }

        System.out.println(answer);
    }
}