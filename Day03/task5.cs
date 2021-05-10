using System;

namespace ConsoleApp8
{
    class Program
    {
        static void Main(string[] args)
        {
            int h = 181;
            char hc = 'b';

            bool isOk = h >= 180 & hc == 'b';
           
            bool ThesameStatement = !(!(h >= 180) | !(hc == 'b'));
            Console.WriteLine(isOk);
            Console.WriteLine(ThesameStatement);
        }
    }
}
