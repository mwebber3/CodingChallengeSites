package qaly;

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Scanner;

public class Qaly {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        NumberFormat format = new DecimalFormat("#0.000");
        int num = input.nextInt();
        double total = 0;
        
        for (int i = 0; i < num; i++) {
            double first = input.nextDouble();
            double second = input.nextDouble();
            total += (first * second);
        }
        System.out.println(format.format(total));
    }
    
}
