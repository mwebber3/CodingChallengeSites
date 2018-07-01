package tarifa;

import java.util.Scanner;

public class Tarifa {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int megabytes = sc.nextInt();
        int months = sc.nextInt();
        int allotted, total = 0;
        allotted = (megabytes * months) + megabytes; 
        
        for (int i = 0; i < months; i++) {
            total += sc.nextInt();
        }
        
        System.out.println((allotted - total));        
    }
    
}
