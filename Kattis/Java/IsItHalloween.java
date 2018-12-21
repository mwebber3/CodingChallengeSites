package isithalloween;

import java.util.Scanner;

public class IsItHalloween {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String userDate = input.nextLine();
        String[] dateArray = userDate.split(" ");
        
        if ("OCT".equals(dateArray[0]) && "31".equals(dateArray[1]) || 
                "DEC".equals(dateArray[0]) && "25".equals(dateArray[1])) {
            System.out.println("yup");
        } else {
            System.out.println("nope");
        }
    }
    
}
