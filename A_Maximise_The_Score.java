import java.util.*;

public class A_Maximise_The_Score {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int t = scanner.nextInt();
            while (t-- > 0) {
                int n = scanner.nextInt();
                int[] nums = new int[2 * n];
                for (int i = 0; i < 2 * n; i++) {
                    nums[i] = scanner.nextInt();
                }
                System.out.println(maximizeScore(n, nums));
            }
        }
    }

    private static int maximizeScore(int n, int[] nums) {
        Arrays.sort(nums);
        int sum = 0;
        for (int i = 0; i < 2*n; i+=2) {
            sum += Math.min(nums[i], nums[i+1]);
        }
        return sum;
    }
}
