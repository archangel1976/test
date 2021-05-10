using System;

namespace asdf
{
    class Program
    {
        static void Main(string[] args)
        {
            int h = 175;
            char hc = 'h';

            bool isOk = !(h >= 180 ^ hc == 'b');
            Console.WriteLine(isOk);
        }
    }
}
