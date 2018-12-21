package pokerhand;

import java.util.Scanner;

public class PokerHand {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int count = -1;
        char character;
        int[] array = new int[100];
        
        String usersHand = input.nextLine();
        String[] hand = usersHand.split(" ");
         
        for (String s : hand) {
            if (++array[character = s.charAt(0)] > count)
                count = array[character];
        }
        System.out.println(count);
    }
    
}