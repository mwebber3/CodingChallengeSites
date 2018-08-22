using System;

namespace DiceCup
{
    class DiceCup
    {
        static void Main(string[] args)
        {
            int i, firstRoll, secondRoll, lowestRoll, highestRoll;
            firstRoll = Convert.ToInt32(Console.ReadLine());
            secondRoll = Convert.ToInt32(Console.ReadLine());
            lowestRoll = firstRoll;
            highestRoll = secondRoll;

            if (secondRoll < firstRoll)
            {
                lowestRoll = secondRoll;
                highestRoll = firstRoll;
            }

            for (i = (lowestRoll + 1); i <= (highestRoll + 1); i++)
            {
                Console.WriteLine(i);
            }
        }
    }
}
