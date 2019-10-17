using System;

namespace LargestPalindrome
{
    class Program
    {
        static void Main(string[] args) {
            int largest = 0;

            for (int x = 100; x < 1000; x++) {
                for (int y = 100; y < 1000; y++) {
                    if (largest < (x * y)) {
                        if (Palindrome(x * y) == true) {
                            largest = (x * y);
                        }
                    }
                }
            }
            Console.WriteLine(largest);
        }

        static bool Palindrome(int multiple) {
            int remainder, reverse = 0, temp = multiple;
            while (temp != 0) {
                remainder = (temp % 10);
                reverse = (reverse * 10 + remainder); 
                temp = (temp / 10);
            }
            if (multiple == reverse) {
                return true;
            } else {
                return false; 
            }
        }
    }
}
