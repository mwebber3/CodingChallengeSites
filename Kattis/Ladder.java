package ladder;

import java.util.Scanner;

public class Ladder {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int h = input.nextInt();
        int v = input.nextInt();
        
        int ladderSize = (int) Math.ceil(1 / (Math.sin(v * (Math.PI / 180)) / h));
        
        System.out.println(ladderSize);
    }
    
}
