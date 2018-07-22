package grassseedsinc;

import java.util.Scanner;

public class GrassSeedsInc {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double costOfSeed = input.nextDouble();
        int numberOfLawns = input.nextInt();
        double size, total = 0;
        
        while (numberOfLawns --> 0) {
            size = input.nextDouble() * input.nextDouble();
            total += (size * costOfSeed);
        }
        
        System.out.printf("%.7f",total);
    }
    
}
