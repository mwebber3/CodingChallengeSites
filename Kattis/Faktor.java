package faktor;

import java.util.Scanner;

public class Faktor {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int result;
        int a = input.nextInt();
        int i = input.nextInt();
        
        result = (a  * (i - 1) + 1);
        System.out.println(result);
    }
    
}
