package relocation;

import java.util.Scanner;

public class Relocation {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numOfCompanies = input.nextInt();
        int numOfRequests = input.nextInt();
        int[] initialLocations = new int[numOfCompanies];
        
        for (int i = 0; i < numOfCompanies; i++) {
            initialLocations[i] = input.nextInt();
        }
        for (int j = 0; j < numOfRequests; j++) {
            int action = input.nextInt();
            int company = input.nextInt();
            int location = input.nextInt();
            
            if (action == 1) {
                initialLocations[company - 1] = location;
            } else {
                System.out.println((Math.abs(initialLocations[company - 1] - 
                        initialLocations[location - 1])));
            }
        }
    }
    
}
