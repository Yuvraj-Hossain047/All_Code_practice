using System;

namespace Area
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Enter the First Number:");
            double a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the Second Number:");
            double b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the Third Number:");
            double c = Convert.ToDouble(Console.ReadLine());

            if (a >= b && a >= c)
            {
                Console.WriteLine("A is the biggest");
            }
            else if (b >= a && b >= c)
            {
                Console.WriteLine("B is the biggest");
            }
            else
            {
                Console.WriteLine("C is the biggest");
            }

            Console.ReadKey();
        }
    }
}
