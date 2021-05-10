using System;

namespace task6
{
    class Program
    {
        static void Main(string[] args)
        {
            int h = 179;
            char hc = 'h';

            bool isOk = h <= 180 & hc != 'b';
            bool theSameStatement = !(!(h <= 180) | !(hc != 'b'));
            Console.WriteLine(isOk);
            Console.WriteLine(theSameStatement);
        }
    }
}
