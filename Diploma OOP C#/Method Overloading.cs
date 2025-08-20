using System;

namespace ConsoleApplication15
{
    public class Sum
    {
        public int SumNumbers(int a, int b)          // adds 2 numbers
        {
            return a + b;
        }

        public int SumNumbers(int a, int b, int c)   // adds 3 numbers
        {
            return a + b + c;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Sum obj = new Sum();

            int sum_1 = obj.SumNumbers(5, 10);        // calls 2-parameter method
            int sum_2 = obj.SumNumbers(10, 5, 25);    // calls 3-parameter method

            Console.WriteLine("First Result is = " + sum_1);
            Console.WriteLine("Second Result is = " + sum_2);

            Console.ReadKey();
        }
    }
}
