using System;

namespace AlphabetSpam
{
    class AlphabetSpam
    {
        static void Main(string[] args)
        {
            string sentence = Console.ReadLine();
            double whitespace = 0.0, lowercase = 0.0, uppercase = 0.0, symbols = 0.0;
            double length = sentence.Length;

            for (int i = 0; i < length; i++)
            {
                char character = sentence[i];
                if (character == '_')
                    whitespace++;
                else if (char.IsUpper(character))
                    uppercase++;
                else if (char.IsLower(character))
                    lowercase++;
                else
                    symbols++;
            }
            Console.WriteLine((whitespace / length) + "\n" + (lowercase / length) + "\n" + (uppercase / length) + "\n" + (symbols / length));
            Console.ReadKey();
        }
    }
}
