//using System;

//class Program
//{
//    static void Main()
//    {
//        // Case 1: NullReferenceException
//        try
//        {
//            string? text = null;
//            Console.WriteLine(text!.Length); // Accessing length of null
//        }
//        catch (NullReferenceException)
//        {
//            Console.WriteLine("Caught Exception: Attempted to access a null object.");
//        }

//        // Case 2: IndexOutOfRangeException
//        try
//        {
//            int[] numbers = { 1, 2, 3 };
//            Console.WriteLine(numbers[5]); // Index 5 does not exist
//        }
//        catch (IndexOutOfRangeException)
//        {
//            Console.WriteLine("Caught Exception: Attempted to access an index outside the array bounds.");
//        }
//        finally
//        {
//            Console.WriteLine("Operation finished.");
//        }
//    }
//}