using System;

namespace Factorial
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number");
            int N = Convert.ToInt32(Console.ReadLine());
            long factorial = 1;

            for (int i = N; i > 0; i--)
            {
                factorial = factorial * i;
            }

            Console.WriteLine("Factorial Number is " + factorial);
            Console.ReadKey();
        }
    }
}
