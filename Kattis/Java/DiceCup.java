package dice.cup;

import java.util.Scanner;

public class DiceCup {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int firstRoll = input.nextInt();
        int secondRoll = input.nextInt();
        int lowestRoll = firstRoll;
        int highestRoll = secondRoll;
        
        if (secondRoll < firstRoll) {
            lowestRoll = secondRoll;
            highestRoll = firstRoll;
        }
        
        for (int i = (lowestRoll + 1); i <= (highestRoll + 1); i++) {
            System.out.println(i);
        }
    }
    
}
