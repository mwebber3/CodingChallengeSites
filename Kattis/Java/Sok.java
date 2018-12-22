package sok;

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Scanner;

public class Sok {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        NumberFormat format = new DecimalFormat("#0.000000");
        double finalOrange, finalApple, finalPineapple, minValue;
        int neededOrange, neededApple, neededPineapple, currentOrange, 
                currentApple, currentPineapple;
        
        neededOrange = input.nextInt();
        neededApple = input.nextInt();
        neededPineapple = input.nextInt();
        currentOrange = input.nextInt();
        currentApple = input.nextInt();
        currentPineapple = input.nextInt();
        
        finalOrange = (1.0 * neededOrange / currentOrange);
        finalApple = (1.0 * neededApple / currentApple);
        finalPineapple = (1.0 * neededPineapple / currentPineapple);
        minValue = Math.min(Math.min(finalOrange, finalApple), finalPineapple);
        
        System.out.print(format.format(neededOrange - minValue * currentOrange) + " ");
        System.out.print(format.format(neededApple - minValue * currentApple) + " ");
        System.out.print(format.format(neededPineapple - minValue * currentPineapple));
    }
    
}
