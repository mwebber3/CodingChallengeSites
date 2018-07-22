package trik;

import java.util.Scanner;

public class Trik {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        String sequence = input.nextLine().toUpperCase();
        int ballPosition = 0;
        
        for (int i = 0; i < sequence.length(); i++) {
            if (sequence.charAt(i) == 'A' && ballPosition != 2) {
                ballPosition = (1 - ballPosition);
            } 
            if (sequence.charAt(i) == 'B' && ballPosition != 0) {
                ballPosition = (-ballPosition + 3);
            }
            if (sequence.charAt(i) == 'C' && ballPosition != 1) {
                ballPosition = (-ballPosition + 2);
            }
        }
        System.out.println(ballPosition + 1);
    }
    
}
