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

            double sum = a + b + c;
            Console.WriteLine("The result is " + sum);
            
            Console.ReadKey();
        }
    }
}
