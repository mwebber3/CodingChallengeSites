package cryptographersconundrum;

import java.util.Scanner;

public class CryptographersConundrum {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String cipherText = input.nextLine().toUpperCase();
        int days = 0, counter = 1;
        
        for (int i = 0; i < cipherText.length(); i++) {
            if (counter == 1 && cipherText.charAt(i) != 'P')
                days++;
            if (counter == 2 && cipherText.charAt(i) != 'E')
                days++;
            if (counter == 3 && cipherText.charAt(i) != 'R')
                days++;
            
            counter++;
            
            if (counter == 4)
                counter = 1;
        }
        System.out.println(days);
    }
    
}
