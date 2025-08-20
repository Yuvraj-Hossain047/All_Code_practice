using System;

namespace TwoNumberAddition
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Number");
            int N = Convert.ToInt32(Console.ReadLine());
            bool isPrime = true;

            if (N <= 1)
            {
                isPrime = false;
            }
            else
            {
                for (int i = 2; i <= N / 2; i++)
                {
                    if (N % i == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime)
            {
                Console.WriteLine("Prime");
            }
            else
            {
                Console.WriteLine("Not Prime");
            }

            Console.ReadKey();
        }
    }
}
