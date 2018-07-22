package aaah;

import java.util.Scanner;

public class Aaah {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        String jonsAaah = input.nextLine();
        String docsAaah = input.nextLine();
        
        if (jonsAaah.length() >= docsAaah.length()) {
            System.out.println("go");
        } else {
            System.out.println("no");
        }
    }
    
}
