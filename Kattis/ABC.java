package abc;

import java.util.Arrays;
import java.util.Scanner;

public class ABC {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numbers[] = new int[3];
        String letters;

        for (int i = 0; i < 3; i++) {
            numbers[i] = input.nextInt();
        }
        
        input.nextLine();
        letters = input.nextLine();
        Arrays.sort(numbers);

        if (letters.charAt(0) == 'A' && letters.charAt(1) == 'B'
                && letters.charAt(2) == 'C') {
            System.out.println(numbers[0] + " " + numbers[1] + " " + numbers[2]);
        } else if (letters.charAt(0) == 'A' && letters.charAt(1) == 'C'
                && letters.charAt(2) == 'B') {
            System.out.println(numbers[0] + " " + numbers[2] + " " + numbers[1]);
        } else if (letters.charAt(0) == 'B' && letters.charAt(1) == 'A'
                && letters.charAt(2) == 'C') {
            System.out.println(numbers[1] + " " + numbers[0] + " " + numbers[2]);
        } else if (letters.charAt(0) == 'B' && letters.charAt(1) == 'C'
                && letters.charAt(2) == 'A') {
            System.out.println(numbers[1] + " " + numbers[2] + " " + numbers[0]);
        } else if (letters.charAt(0) == 'C' && letters.charAt(1) == 'A' && 
                letters.charAt(2) == 'B') {
            System.out.println(numbers[2] + " " + numbers[0] + " " + numbers[1]);
        } else if (letters.charAt(0) == 'C' && letters.charAt(1) == 'B' && 
                letters.charAt(2) == 'A') {
            System.out.println(numbers[2] + " " + numbers[1] + " " + numbers[0]);
        }
    }
}
