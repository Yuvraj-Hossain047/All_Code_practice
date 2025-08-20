using System;

namespace TwoNumberAddition
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Minimum Number");
            int min = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter Maximum Number");
            int max = Convert.ToInt32(Console.ReadLine());

            int sum = 0;

            for (int i = min; i <= max; i++)
            {
                if (i % 2 == 0)
                {
                    sum = sum + i;
                }
            }

            Console.WriteLine("The Result is " + sum);
            Console.ReadKey();
        }
    }
}
