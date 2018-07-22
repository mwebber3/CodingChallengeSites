package sevenwonders;

import java.util.Scanner;

public class SevenWonders {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String cards = input.nextLine().toUpperCase();
        int counterT = 0, counterC = 0, counterG = 0, total = 0, superSet = 0;
        
        for (int i = 0; i < cards.length(); i++) {
            // switch instead of if statements for efficiency
            switch (cards.charAt(i)) {
                case 'T':
                    counterT++;
                    break;
                case 'C':
                    counterC++;
                    break;
                default:
                    counterG++;
                    break;
            }
        }
        if (counterT <= counterC && counterT <= counterG) {
            superSet = counterT;
        } else if (counterC <= counterT && counterC <= counterG) {
            superSet = counterC;
        } else {
            superSet = counterG;
        }
        total = (int) (Math.pow(counterT, 2) + Math.pow(counterC, 2) 
                + Math.pow(counterG, 2)) + (superSet * 7);
        System.out.println(total);
    }

}
