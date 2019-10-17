using System;

namespace LargestPrimeFactor {
    class Program {
        static void Main(string[] args) {
            // long total = 600851475143;
            long total = 15;
            long maxPrime = 2;

            while (total != 1) {
                if (total % maxPrime == 0) {
                    total = (total / maxPrime);
                } else {
                    maxPrime++;
                }
                Console.WriteLine(total);
                Console.WriteLine(maxPrime);
                Console.WriteLine("----------------");
            }
            Console.WriteLine(maxPrime);
        }
    }
}
