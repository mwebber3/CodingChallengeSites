using System;

namespace SmallestMultiple
{
    class Program {
        static void Main(string[] args) {
            int num = 1;

            while (true) {
                bool biggiesmall = true;
                for (int i = 1; i <= 10; i++) {
                    if (num % i != 0) {
                        biggiesmall = false;
                        break;
                    }
                }

                if (biggiesmall) {
                    break;
                }
                num++;
            }
            Console.WriteLine(num);
        }
    }
}
