package encodedmessage;

import java.util.Scanner;

public class EncodedMessage {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cases = input.nextInt();
        
        for (int i = 0; i <= cases; i++) {
            String encodedMessage = input.nextLine();
            int length = (int) Math.sqrt(encodedMessage.length());
            DecodeMessage(length, encodedMessage);
        }
    }

    private static void DecodeMessage(int length, String encodedMessage) {
        for (int j = 0; j < length; j++) {
            for (int k = (length - 1); k < (encodedMessage.length()); k += length) {
                System.out.print(encodedMessage.charAt(k - j));
            }
        }
        System.out.println();
    }
    
}
