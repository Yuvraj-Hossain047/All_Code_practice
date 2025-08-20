import java.util.Scanner;

public class Multiplication {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Input first number: ");
        double a = input.nextDouble();

        System.out.print("Input second number: ");
        double b = input.nextDouble();

        System.out.println(a + " x " + b + " = " + (a * b));

        input.close();
    }
}
