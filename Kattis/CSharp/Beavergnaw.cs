using System;

namespace Beavergnaw
{
    class Beavergnaw
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int d = Convert.ToInt32(Console.ReadLine());
                int v = Convert.ToInt32(Console.ReadLine());

                if (d == 0 && v == 0)
                {
                    System.Environment.Exit(1);
                }

                double result = Math.Pow((Math.Pow(d, 3) * Math.PI / 6 - v) / (Math.PI / 6), (1.0 / 3));
                Console.WriteLine("{0:N9}", result);
            }
        }
    }
}
