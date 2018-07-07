package everywhere;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Everywhere {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int testCases = input.nextInt();

        for (int i = 0; i < testCases; i++) {
            int numOfTrips = input.nextInt();
            Set<String> cities = new HashSet<>();

            for (int j = 0; j <= numOfTrips; j++) {
                cities.add(input.nextLine());
            }
            /* For testing: 
            cities.forEach((city) -> { 
                System.out.println(city);
            });*/
            System.out.println(cities.size() - 1);
        }
    }

}
