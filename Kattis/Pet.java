package pet;

import java.util.Arrays;
import java.util.Scanner;

public class Pet {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int ratings[] = new int[5];
        int sum = 0, max = 0;

        for (int i = 0; i < ratings.length; i++) {
            for (int j = 0; j < ratings.length - 1; j++) {
                sum += input.nextInt();
            }
            ratings[i] = sum;
            sum = 0;
        }
        max = Arrays.stream(ratings).max().getAsInt();

        if (ratings[0] == max) {
            System.out.println("1 " + max);
        } else if (ratings[1] == max) {
            System.out.println("2 " + max);
        } else if (ratings[2] == max) {
            System.out.println("3 " + max);
        } else if (ratings[3] == max) {
            System.out.println("4 " + max);
        } else {
            System.out.println("5 " + max);
        }

    }

}
