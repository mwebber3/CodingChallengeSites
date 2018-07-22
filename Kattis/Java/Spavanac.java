package spavanac;

import java.util.Scanner;

public class Spavanac {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int hour = input.nextInt();
        int minute = input.nextInt();
        int minutesRemainder, finalHour = 0, finalMinute = 0;
        
        if (minute >= 45) {
            finalMinute = (minute - 45);
            finalHour = hour;
        } else {
            minutesRemainder = (45 - minute);
            finalMinute = (60 - minutesRemainder);
            if (hour == 0) {
                finalHour = 23;
            } else {
                finalHour = (hour - 1);
            }
        }
        System.out.println(finalHour + " " + finalMinute);
    }
    
}
