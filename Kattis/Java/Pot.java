package pot;

import java.util.Scanner;

public class Pot {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int result = 0;
        int totalNumbers = input.nextInt();
        int wrongNumbers[] = new int[totalNumbers];
        int endOfNumbers[] = new int[totalNumbers];
        int firstPartOfNum[] = new int[totalNumbers];
        
        for (int i = 0; i < totalNumbers; i++) {
            wrongNumbers[i] = input.nextInt();
            endOfNumbers[i] = (wrongNumbers[i] % 10);
            firstPartOfNum[i] = (wrongNumbers[i] / 10);
            result += Math.pow(firstPartOfNum[i], endOfNumbers[i]);
        } 
        /* Testing (need a new import): 
        System.out.println("Entered numbers:");
        System.out.println(Arrays.toString(wrongNumbers) + " ");
        System.out.println("The end of the entered numbers:");
        System.out.println(Arrays.toString(endOfNumbers) + " ");
        System.out.println("The first part of the numbers:");
        System.out.println(Arrays.toString(firstPartOfNum) + " ");
        System.out.println("Result: " + result); */
        
        System.out.println(result);
    }
    
}
