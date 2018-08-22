using System;

namespace Planina
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, points;
            n = Convert.ToInt32(Console.ReadLine());
            points = (int) Math.Pow((Math.Pow(2, n) + 1), 2);
            Console.WriteLine(points);
            // for testing: Console.ReadKey();
        }
    }
}
