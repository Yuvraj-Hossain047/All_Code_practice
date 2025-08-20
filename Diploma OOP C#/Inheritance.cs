using System;

namespace Inheritance
{
    class A
    {
        public int a;
        public int b;

        public void result(int x, int y)
        {
            a = x;
            b = y;
        }
    }

    class B : A
    {
        public int show()
        {
            return (a + b);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            B obj = new B();
            obj.result(5, 5);
            Console.WriteLine("Result is = " + obj.show());
            Console.ReadKey();
        }
    }
}
