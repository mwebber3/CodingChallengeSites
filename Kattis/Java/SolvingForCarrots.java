package solvingforcarrots;

import java.util.Scanner;

public class SolvingForCarrots {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int contestantsAndProblems[] = new int[2];
        int problems;
        
        for (int i = 0; i < 2; i++) {
            contestantsAndProblems[i] = input.nextInt();
        }
        input.nextLine(); 
        problems = contestantsAndProblems[1];
        
        for (int i = 0; i < contestantsAndProblems[0]; i++) {
            String description = input.nextLine();
        }
        System.out.println(problems);
    }
    
}
