import java.util.Scanner;

public class BasicCalculatorVer2 {
    public static void main(String[] args) {
        char op;
        double n1, n2;
        Scanner s = new Scanner(System.in);

        System.out.println("Choose an operator: +, -, *, /, %");
        op = s.next().charAt(0);

        System.out.println("Enter first number:");
        n1 = s.nextDouble();

        System.out.println("Enter second number:");
        n2 = s.nextDouble();

        switch (op) {
            case '+':
                System.out.println(n1 + " + " + n2 + " = " + (n1 + n2));
                break;
            case '-':
                System.out.println(n1 + " - " + n2 + " = " + (n1 - n2));
                break;
            case '*':
                System.out.println(n1 + " * " + n2 + " = " + (n1 * n2));
                break;
            case '/':
                if (n2 != 0)
                    System.out.println(n1 + " / " + n2 + " = " + (n1 / n2));
                else
                    System.out.println("Error! Division by zero.");
                break;
            case '%':
                System.out.println(n1 + " % " + n2 + " = " + (n1 % n2));
                break;
            default:
                System.out.println("Wrong Input!");
                break;
        }

        s.close();
    }
}
