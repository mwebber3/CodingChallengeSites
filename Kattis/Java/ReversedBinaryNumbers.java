package reversedbinarynumbers;

import java.util.Scanner;

public class ReversedBinaryNumbers {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int backToInt, number = input.nextInt();
        String binary, reversedBinary = "";
        
        binary = Integer.toBinaryString(number);
        
        for (int i = (binary.length() - 1); i >= 0; i--) {
            reversedBinary += binary.charAt(i);
        }
 
        backToInt = Integer.parseInt(reversedBinary, 2);
        System.out.println(backToInt);
    }
}
