package parking;

import java.util.Scanner;

public class Parking {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] prices = new int[4];
        int[] arrival = new int[3];
        int[] departure = new int[3];
        int total = 0;
        
        prices[0] = 0; // zero cars = freeeee
        prices[1] = input.nextInt();
        prices[2] = input.nextInt();
        prices[3] = input.nextInt();
        
        arrival[0] = input.nextInt();
        departure[0] = input.nextInt();
        
        arrival[1] = input.nextInt();
        departure[1] = input.nextInt();
        
        arrival[2] = input.nextInt();
        departure[2] = input.nextInt();
        
        for (int i = 0; i < 100; i++) {
            int numOfCars = 0;
            for (int j = 0; j < 3; j++) {
                if (i >= arrival[j] && i < departure[j])
                    numOfCars += 1;
            }
            total += (numOfCars * prices[numOfCars]);
        }
        System.out.println(total);
    }
    
}
