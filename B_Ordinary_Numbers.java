import java.util.Scanner;

public class B_Ordinary_Numbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int dig = String.valueOf(n).length();
            int tmp = dig;
            int num = 0;

            while (dig > 0) {
                num = num * 10 + 1;
                dig--;
            }

            int extra = n / num;
            int ans = 9 * (tmp - 1) + extra;
            System.out.println(ans);
        }
    }
}
