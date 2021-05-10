using System;

namespace Task1
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 5;
            int y = 12;
            int j = x;
            x = y;
            y = j;
            Console.WriteLine("X = {0}", x);
            Console.WriteLine("Y = {0}", y);
            
        }
    }
}
