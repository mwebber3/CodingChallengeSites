package detaileddifferences;

import java.util.Scanner;

public class DetailedDifferences {
    
    public static String FindDifference(String firstString, String secondString) {
        char[] first = firstString.toLowerCase().toCharArray();
        char[] second = secondString.toLowerCase().toCharArray();
        char[] result = new char[first.length]; 
        for (int i = 0; i < first.length; i++) {
            if (first[i] != second[i]) {
                result[i] = '*';
            } else {
                result[i] = '.';
            }
        }
        String stringResult = new String(result);
        System.out.println(stringResult);
        return stringResult;
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int testCases = input.nextInt();
        
        for (int i = 0; i < testCases; i++) {
            String firstString = input.next();
            String secondString = input.next(); 
            FindDifference(firstString, secondString);
        }
    }
    
}
