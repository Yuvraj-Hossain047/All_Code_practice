import java.util.Scanner;

public class MultiplicationTable {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int a = input.nextInt();

        System.out.println("Multiplication Table of " + a + ":");
        for (int i = 1; i <= 10; i++) {
            System.out.println(a + " * " + i + " = " + (a * i));
        }

        input.close();
    }
}
