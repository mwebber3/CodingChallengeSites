package planina;

import java.util.Scanner;

public class Planina {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n, points, result;
        n = input.nextInt();
        
        points = (int) Math.pow(2, n) + 1;
        result = (int) Math.pow(points, 2); //((2^n + 1) ^2);
        System.out.println(result);
    }
    
}
