package akcija;

import java.util.Arrays;
import java.util.Scanner;

public class Akcija {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numOfBooks = input.nextInt();
        int bookCost[] = new int[numOfBooks];
        int totalForAll = 0, discountBooks = 0, totalWithPromo = 0;
        
        for (int i = 0; i < numOfBooks; i++) {
            bookCost[i] = input.nextInt();  
            totalForAll += bookCost[i];
        }
        
        Arrays.sort(bookCost);
        
        for (int i = bookCost.length - 3; i >= 0; i -= 3) {
            discountBooks += bookCost[i];
        }
        
        totalWithPromo = (totalForAll - discountBooks);
        System.out.println(totalWithPromo);
    }
}
