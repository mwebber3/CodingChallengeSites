package beavergnaw;

import java.util.Scanner;
import static java.lang.Math.pow;

public class Beavergnaw {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double pi = 3.1415926535897932384626433; // pi from wiki
        
        while (true) {
            double result;
            double d = input.nextDouble();
            double v = input.nextDouble();
            
            if (d == 0 && v == 0)
                break;
            
            result = pow((pow(d, 3) * pi / 6 - v) / (pi / 6), (1.0 / 3));
            System.out.printf("%.9f \n", result);
        }
    }
    
}
