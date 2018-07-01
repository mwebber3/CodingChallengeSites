package r2;

import java.util.Scanner;

public class R2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] variables = new int[2];
        
        for (int i = 0; i < variables.length; i++) {
            variables[i] = sc.nextInt();
        }
        System.out.println((variables[1] * 2) - variables[0]);
    }
    
}
