package filip;

import java.util.Scanner;

public class Filip {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        String a = new String(new StringBuilder(input.next()).reverse());
        String b = new String(new StringBuilder(input.next()).reverse());
        
        int parsedA = Integer.parseInt(a);
        int parsedB = Integer.parseInt(b);

        System.out.println(parsedA > parsedB ? parsedA : parsedB);

    }

}
