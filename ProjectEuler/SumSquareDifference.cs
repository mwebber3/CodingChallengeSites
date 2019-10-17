using System;

namespace SumSquareDifference
{
    class Program {
        static void Main(string[] args) {
            long squareOfSums = 0, sumOfSquares = 0, difference = 0; 

            for (int i = 1; i < 101; i++) {
                squareOfSums = (squareOfSums + i);
                sumOfSquares += (long)Math.Pow(i, 2);
            }

            squareOfSums = (long)Math.Pow(squareOfSums, 2);
            difference = (squareOfSums - sumOfSquares);
            Console.WriteLine(difference);
        }
    }
}
