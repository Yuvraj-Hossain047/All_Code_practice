using System;

namespace Fibonacci
{
    class Program
    {
        static void Main(string[] args)
        {
            int first = 0, second = 1, fib;
            Console.WriteLine("First 9 Fibonacci numbers are:");
            
            Console.WriteLine(first);
            Console.WriteLine(second);

            for (int i = 2; i < 9; i++)
            {
                fib = first + second;
                Console.WriteLine(fib);
                first = second;
                second = fib;
            }
        }
    }
}
