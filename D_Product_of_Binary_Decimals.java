
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class D_Product_of_Binary_Decimals {


    public static void main(String[] args) {


        Scanner sc=new Scanner(System.in);

        int arr[] ={100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000,
                10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110,
                1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10
};
        int t = sc.nextInt();

        while(t>0){

            int val = sc.nextInt();

//            List<Integer> li = new ArrayList<>();
//            for(int i=2;i<=100000;i++){
//                String no = i+"";
//
//                int isAllOneOrZeros = 1;
//                for(int j=0;j<no.length();j++){
//                    char c= no.charAt(j);
//                    if(c=='1' || c=='0'){
//
//                    }else
//                        isAllOneOrZeros = 0;
//                }
//                if(isAllOneOrZeros==1){
//                    li.add(i);
//                }
//            }
            String ans = "yes";
            int past = val;

           // Collections.sort(li, Collections.reverseOrder());

           // System.out.println(li);
            while(true){

                int got = 0;
                for(int i=0;i<arr.length;i++){
                    int num = arr[i];
                    if(val>=num) {
                        if (val % num == 0) {
                           // System.out.println(val +" / "+num+" = "+val/num);
                            past = val;
                            val = val / num;
                            got = 1;
                            break;
                        }
                    }
                }



                if(got==0){
                    //System.out.println(val);
                    if(val==1){
                        ans = "yes";
                    }else
                    ans = "no";
                    break;
                }else{
                    if(val<=0){
                        break;
                    }else{
                        if(past==val){
                          //  System.out.println(past);
                            ans= "no";
                            break;
                        }
                    }
                }
            }
            System.out.println(ans);

            t--;
        }


    }
}

