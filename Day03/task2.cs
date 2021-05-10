using System;

namespace Task2
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 5;
            int y = 12;
            x = x + y;
            y = x - y;
            x = x - y;
            Console.WriteLine("X = {0}", x);
            Console.WriteLine("Y = {0}", y);
        }
    }
}
