using System;

namespace Area
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter First Number");
            double a = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Second Number");
            double b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Enter Third Number");
            double c = Convert.ToDouble(Console.ReadLine());

            double discriminant = (b * b) - (4 * a * c);

            if (discriminant > 0)
            {
                double root1 = (-b + Math.Sqrt(discriminant)) / (2 * a);
                double root2 = (-b - Math.Sqrt(discriminant)) / (2 * a);
                Console.WriteLine("The roots are " + root1 + " and " + root2);
            }
            else if (discriminant == 0)
            {
                double root = -b / (2 * a);
                Console.WriteLine("The root is " + root);
            }
            else
            {
                Console.WriteLine("The roots are not real.");
            }

            Console.ReadKey();
        }
    }
}
