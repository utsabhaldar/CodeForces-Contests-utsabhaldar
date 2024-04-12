import java.util.Scanner;

public class A_Thorns_and_Coins {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.nextLine();

        int ans = 0;
        for (int i = 0; i < n - 2;) {
            if(n==1){
                System.out.println(0);
            }
            else if (s.charAt(i + 1) == '@') {
                ans++;
                i++;
            } else if (s.charAt(i + 2) == '@') {
                ans++;
                i += 2;
            } else {
                break;
            }
        }

        System.out.println(ans);
    }
}
