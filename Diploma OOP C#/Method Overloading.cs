using System;

namespace ConsoleApplication15
{
    public class sum
    {
        public int A(int a, int b)
        {
            return a + b;
        }

        public int B(int a, int b, int c)
        {
            return a + b + c;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            sum obj = new sum();

            int sum_1 = obj.A(5, 10);
            int sum_2 = obj.B(10, 5, 25);

            Console.WriteLine("First Result is = " + sum_1);
            Console.WriteLine("Second Result is = " + sum_2);

            Console.ReadKey();
        }
    }
}
