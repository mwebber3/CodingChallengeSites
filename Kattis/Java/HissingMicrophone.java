package hissingmicrophone;

import java.util.Scanner;

public class HissingMicrophone {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine().toLowerCase();
        String output = "no hiss";
        
        for (int i = 0; i < word.length() - 1; i++) {
            if ((word.charAt(i) == 's') && (word.charAt(i + 1) == 's')) {
                output = "hiss";
            } 
        }
        System.out.println(output);
    }

}
