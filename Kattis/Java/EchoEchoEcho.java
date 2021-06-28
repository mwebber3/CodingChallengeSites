public class Echo {

    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String word = input.nextLine();
        System.out.println(word + " " + word + " " + word);
    }
}
