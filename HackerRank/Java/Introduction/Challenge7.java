// Java Loops II
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i = 0; i < t; i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            double previous = 0;
            for (int j = 0; j < n; j++) {
                double result = previous + Math.pow(2, j) * b;
                System.out.printf("%.0f", (result + a));
                System.out.print(" ");
                previous = result;
            }
            System.out.println();
        }
        in.close();
    }
}
