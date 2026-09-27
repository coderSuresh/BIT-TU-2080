using System;

internal class NameSpace
{
    private class StringManipulation
    {
        private string input;

        public void TakeInput()
        {
            Console.WriteLine("Enter a string:");
            input = Console.ReadLine();
        }

        public void ManipulateString()
        {
            if (!string.IsNullOrEmpty(input))
            {
                // 2. Convert to uppercase and lowercase
                string upper = input.ToUpper();
                string lower = input.ToLower();

                // 3. Find length
                int length = input.Length;

                // 4. Reverse string
                // We convert the string to an array of characters, reverse it, 
                // and create a new string from the result.
                char[] charArray = input.ToCharArray();
                Array.Reverse(charArray);
                string reversed = new string(charArray);

                // Display results
                Console.WriteLine($"\nOriginal: {input}");
                Console.WriteLine($"Uppercase: {upper}");
                Console.WriteLine($"Lowercase: {lower}");
                Console.WriteLine($"Length:    {length}");
                Console.WriteLine($"Reversed:  {reversed}");
            }
            else
            {
                Console.WriteLine("Input was empty.");
            }
        }
    }

    //public class Program
    //{
    //    public static void Main()
    //    {
    //        StringManipulation s = new StringManipulation();

    //        s.TakeInput();
    //        s.ManipulateString();
    //    }
    //}

}