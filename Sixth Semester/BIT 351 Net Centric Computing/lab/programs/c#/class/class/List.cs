//using System;
//using System.Collections.Generic;

//class Program
//{
//    static void Main()
//    {
//        // 1. Add 10 numbers to the List
//        List<int> numbers = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

//        Console.WriteLine("Original List: " + string.Join(", ", numbers));

//        // 2. Remove even numbers
//        // We use RemoveAll with a predicate (a condition)
//        numbers.RemoveAll(n => n % 2 == 0);

//        // 3. Display remaining elements
//        Console.WriteLine("After removing even numbers: " + string.Join(", ", numbers));
//    }
//}