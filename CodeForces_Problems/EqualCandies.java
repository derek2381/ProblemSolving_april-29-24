// problem link
// https://codeforces.com/problemset/problem/1676/B

import java.util.*;

public class solution{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();

            int[] arr = new int[n];

            for(int i = 0;i < n;i++)
            {
                arr[i] = sc.nextInt();
            }

            Arrays.sort(arr);

            int min = arr[0];
            long total = 0;
            for(int i = 1;i < n;i++){
                total += arr[i] - min;
            }
            System.out.println(total);
        }
    }
}
