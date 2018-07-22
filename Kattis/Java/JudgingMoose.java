package judgingmoose;

import java.util.Scanner;

public class JudgingMoose {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int left = input.nextInt();
        int right = input.nextInt();
        int totalTines; 
        String EvenOrOdd;
        
        if (left == 0 && right == 0) {
            EvenOrOdd = "Not a moose";
        } else if (left == right) {
            totalTines = left * 2;
            EvenOrOdd = ("Even " + totalTines);
        } else if (left > right) {
            totalTines = left * 2;
            EvenOrOdd = ("Odd " + totalTines);
        } else {
            totalTines = right * 2;
            EvenOrOdd = ("Odd " + totalTines);
        }
        System.out.println(EvenOrOdd);
    }
    
}
