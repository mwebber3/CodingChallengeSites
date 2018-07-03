package apaxiaaaaaaaaaaaans;

import java.util.Scanner;

public class Apaxiaaaaaaaaaaaans {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        int lengthOfName = name.length();
        String output = "";

        for (int i = 0; i < lengthOfName; i++) {
            if (i == (name.length() - 1) || name.charAt(i) != name.charAt(i + 1)) {
                output += name.charAt(i);
            }
        }
        System.out.println(output);
    }

}
