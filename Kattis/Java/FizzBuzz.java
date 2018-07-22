package fizzbuzz;

import java.util.Scanner;

public class FizzBuzz {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int xyn[] = new int[3];
        
        for (int i = 0; i < 3; i++) {
            xyn[i] = input.nextInt();
        }
        for (int i = 1; i <= xyn[2]; i++) {
            if (i % xyn[0] == 0 && i % xyn[1] == 0) {
                System.out.println("FizzBuzz");
            } else if (i % xyn[0] == 0) {
                System.out.println("Fizz");
            } else if (i % xyn[1] == 0) {
                System.out.println("Buzz");
            } else {
                System.out.println(i);
            }
        }
    }
    
}
