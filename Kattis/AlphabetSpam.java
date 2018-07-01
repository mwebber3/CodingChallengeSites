package alphabetspam;

import java.util.Scanner;

public class AlphabetSpam {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String sentence = input.nextLine();
        double whitespaceRatio, lowerRatio, upperRatio, symbolsRatio;
        double whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;
        int length = sentence.length();
        
        for (int i = 0; i < length; i++) {
            char character = sentence.charAt(i);
            
            if (character == '_') {
                whitespace++;
            } else if (character >= 97 && character <= 122) {
                lowercase++;
            } else if (character >= 65 && character <= 90) {
                uppercase++;
            } else {
                symbols++;
            }
        }
        whitespaceRatio = (whitespace / length);
        lowerRatio = (lowercase / length);
        upperRatio = (uppercase / length);
        symbolsRatio = (symbols / length);

        System.out.println(whitespaceRatio + "\n" + lowerRatio + "\n"
                + upperRatio + "\n" + symbolsRatio);
    }

}
