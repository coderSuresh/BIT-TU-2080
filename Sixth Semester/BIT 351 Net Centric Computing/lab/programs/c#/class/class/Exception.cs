//using System;

//class Program
//{
//    static void Main()
//    {
//        int numerator = 10;
//        int denominator = 0; // This will trigger the exception

//        try
//        {
//            Console.WriteLine("Attempting to divide...");
//            int result = numerator / denominator;
//            Console.WriteLine($"Result: {result}");
//        }
//        catch (DivideByZeroException ex)
//        {
//            // Specifically catches division by zero
//            Console.WriteLine($"Error: Cannot divide by zero. ({ex.Message})");
//        }
//        catch (Exception ex)
//        {
//            // Catches any other unexpected errors
//            Console.WriteLine($"An unexpected error occurred: {ex.Message}");
//        }
//        finally
//        {
//            // This block always runs, whether an error occurred or not
//            Console.WriteLine("Cleanup: The division operation attempt is complete.");
//        }
//    }
//}