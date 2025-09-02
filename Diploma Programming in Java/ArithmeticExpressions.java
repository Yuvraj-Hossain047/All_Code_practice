public class ArithmeticExpressions {
    public static void main(String[] args) {

        int expr1, expr2, expr3, expr4;

        expr1 = -5 + 8 * 6;
        expr2 = (55 + 9) % 9;
        expr3 = 20 + (-3 * 5 / 8);
        expr4 = 5 + 15 / 3 * 2 - 8 % 3;

        System.out.println("Expression 1: " + expr1);
        System.out.println("Expression 2: " + expr2);
        System.out.println("Expression 3: " + expr3);
        System.out.println("Expression 4: " + expr4);
    }
}
