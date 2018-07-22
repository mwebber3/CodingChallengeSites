package bijele;

import java.util.Scanner;

public class Bijele {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] correctPieces = {1, 1, 2, 2, 2, 8};

        for (int i = 0; i < correctPieces.length; i++) {
            System.out.println(correctPieces[i] - sc.nextInt() + " ");
        }
    }
    
}
