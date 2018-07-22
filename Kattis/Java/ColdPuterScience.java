package cold.puter.science;

import java.util.Scanner;

public class ColdPuterScience {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int counter = 0;
        int n = sc.nextInt();
        int[] list = new int[n];
        
        for (int i = 0; i < n; i++) {
            list[i] = sc.nextInt();
        }
        
        for (int i : list) {
            if (i < 0) {
                counter = (counter + 1);
            }
        }
        System.out.println(counter);
    }
    
}
