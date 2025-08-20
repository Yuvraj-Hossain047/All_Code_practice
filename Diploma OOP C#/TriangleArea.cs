using System;

namespace Area
{
    class Program
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Enter the First Number");
            double a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the second Number");
            double b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter the Third Number");
            double c = Convert.ToDouble(Console.ReadLine());

            if ((a + b > c) && (b + c > a) && (c + a > b))
            {
                double s = (a + b + c) / 2;
                double result = Math.Sqrt(s * (s - a) * (s - b) * (s - c));
                Console.WriteLine("The result is " + result);
            }
            else
            {
                Console.WriteLine("The given sides do not form a valid triangle.");
            }

            Console.ReadKey();
        }
    }
}
