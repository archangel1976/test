using System;

namespace Task3
{
    class Program
    {
        static void Main(string[] args)
        {
            int someyear = 2020;
            bool isNakiani;
            if(((someyear % 4 == 0)) && (someyear % 100 != 0) || (someyear % 400==0))
            {
                isNakiani = true;
            }
            else
            {
                isNakiani = false;
            }
            Console.WriteLine(isNakiani);
            

        }
    }
}
