package oddities;

import java.util.Scanner;

public class Oddities {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int result = 0;
        int totalNumbers = input.nextInt();
        int allNumbers[] = new int[totalNumbers];

        for (int i = 0; i < totalNumbers; i++) {
            allNumbers[i] = input.nextInt();
        }

        for (int i = 0; i < totalNumbers; i++) {
            if (allNumbers[i] % 2 == 0) {
                System.out.println(allNumbers[i] + " is even");
            } else {
                System.out.println(allNumbers[i] + " is odd");
            }
        }
    }

}
