package autori;

import java.util.Scanner;

public class Autori {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String sequence = input.nextLine();
        String uppercaseLetters = "";
        int length = sequence.length();
        
        for (int i = 0; i < length; i++) {
            char character = sequence.charAt(i);
            if (character >= 65 && character <= 90) {
                uppercaseLetters += character;
            }
        }
        System.out.println(uppercaseLetters);
    }
    
}
