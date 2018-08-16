package heartrate;

import java.util.Scanner;

public class HeartRate {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double b, p, minABPM, maxABPM, calcBPM;
        int cases = scanner.nextInt();
        
        for (int i = 0; i < cases; i++) {
            b = scanner.nextDouble();
            p = scanner.nextDouble();
            minABPM = (60.0 / (p / (b - 1)));
            maxABPM = (60.0 / (p / (b + 1)));
            calcBPM = ((60.0 * b) / p);
            System.out.printf("%.4f %.4f %.4f \n", minABPM, calcBPM, maxABPM);
            reset(b, p, minABPM, maxABPM, calcBPM);
        }
    }

    private static void reset(double b, double p, double minABPM, double maxABPM, 
            double calcBPM) {
        b = 0.0;
        p = 0.0;
        minABPM = 0.0;
        maxABPM = 0.0;
        calcBPM = 0.0;
    }
    
}
