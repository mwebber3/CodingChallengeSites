using System;
using System.Linq;

namespace Kornislav
{
    class Kornislav
    {
        static void Main(string[] args)
        {
            int[] numbers = new int[4];

            var values = Console.ReadLine().Split(' ').Select(token => int.Parse(token));
            numbers = values.ToArray();

            Array.Sort(numbers);
            // Testing: foreach (int i in numbers) Console.WriteLine(i);
            Console.WriteLine(numbers[0] * numbers[2]);
        }
    }
}
