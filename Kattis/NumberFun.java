package numberfun;

import java.util.Scanner;

public class NumberFun {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int testCaseAmount = input.nextInt();
        double a, b, c;
        for (int i = 0; i < testCaseAmount; i++) {
            a = input.nextDouble();
            b = input.nextDouble();
            c = input.nextDouble();
            
            if ((a + b) == c)
                System.out.println("Possible");
            else if ((a - b) == c || (b - a) == c)
                System.out.println("Possible");
            else if ((a / b) == c || (b / a) == c) 
                System.out.println("Possible");
            else if ((a * b) == c)
                System.out.println("Possible");
            else 
                System.out.println("Impossible");
        }
    }
    
}
