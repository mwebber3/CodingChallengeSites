package hangingoutontheterrace;

import java.util.Scanner;

public class HangingOutOnTheTerrace {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int safetyLimit = input.nextInt();
        int numOfEvents = input.nextInt();
        input.nextLine();
        int peopleOnTerrace = 0, peopleToEnter = 0, rejectedGroups = 0;

        for (int i = 0; i < numOfEvents; i++) {
            String atDoor = input.nextLine().toLowerCase();
            int amount = Integer.parseInt(atDoor.replaceAll("[\\D]", ""));

            if (atDoor.startsWith("leave")) {
                peopleOnTerrace -= amount;
            } else {
                peopleToEnter += amount;
            }
            if (atDoor.startsWith("enter")
                    && (peopleOnTerrace + peopleToEnter) > safetyLimit) {
                rejectedGroups++;
            } else {
                peopleOnTerrace += peopleToEnter;
            }
            peopleToEnter = 0;
        }
        System.out.println(rejectedGroups);
    }

}
