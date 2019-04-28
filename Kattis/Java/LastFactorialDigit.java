package lastfactorialdigit;

import java.util.Scanner;

public class LastFactorialDigit {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cases = input.nextInt();
         
        for (int i = 0; i < cases; i++) {
            int number = input.nextInt();
            
            int result = calculateFactorial(number);
            int lastDigit = result % 10;
            System.out.println(lastDigit);
        }
    }

    private static int calculateFactorial(int number) {
        if (number == 1) {
            return 1;
        } else {
            return number * calculateFactorial(number - 1);
        }
    }
}