// Java End-of-file

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int i = 1;
        Scanner input = new Scanner(System.in);
        
        while(input.hasNext()) {
            String line = input.nextLine();
            System.out.println(i + " " + line);
            i++;
        }
    }
}
