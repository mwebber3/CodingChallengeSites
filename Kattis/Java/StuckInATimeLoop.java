package stuckinatimeloop;

import java.util.Scanner;

public class StuckInATimeLoop {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int amount = sc.nextInt();
        
        for (int i = 1; i <= amount; i++) {
            System.out.println(i + " Abracadabra");
        }
    }
    
}
