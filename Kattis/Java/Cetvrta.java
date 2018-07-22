package cetvrta;

import java.util.Scanner;

public class Cetvrta {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x1 = input.nextInt(), y1 = input.nextInt();
        int x2 = input.nextInt(), y2 = input.nextInt();
        int x3 = input.nextInt(), y3 = input.nextInt();
        int x4, y4;
        
        if (x1 != x2 && x1 != x3) {
            x4 = x1;
        } else if (x2 != x1 && x2 != x3) {
            x4 = x2;
        } else {
            x4 = x3;
        }
        if (y1 != y2 && y1 != y3) {
            y4 = y1;
        } else if (y2 != y1 && y2 != y3) {
            y4 = y2;
        } else {
            y4 = y3;   
        }
        System.out.println(x4 + " " + y4);
    }
    
}
