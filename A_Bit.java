import java.util.Scanner;

public class A_Bit {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();

        int n=0;
        String[] arr = new String[t];
        
        for(int i=0; i<t; i++){
            arr[i] = sc.nextLine();
        }

        for(int i=0; i<t; i++){
            if(arr[i] == "++X" || arr[i] == "X++") n++;
            else n--;
        }
        
        System.out.print(n);
    }
}