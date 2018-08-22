using System;

namespace Aaah_
{
    class Aaah
    {
        static void Main(string[] args)
        {
            string jonsAaah = Console.ReadLine();
            string docsAaah = Console.ReadLine();

            if (jonsAaah.Length >= docsAaah.Length)
                Console.WriteLine("go");
            else 
                Console.WriteLine("no");
        }
    }
}
