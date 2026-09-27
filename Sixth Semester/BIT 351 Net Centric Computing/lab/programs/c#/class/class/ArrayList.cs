//using System;
//using System.Collections; // Required for ArrayList

//class Program
//{
//    static void Main()
//    {
//        // Creating an ArrayList
//        ArrayList list = new ArrayList();

//        // 1. Add elements
//        list.Add("C# Programming");
//        list.Add(101);         // ArrayList can store different types
//        list.Add(45.5);
//        list.Add("Learning");

//        Console.WriteLine("ArrayList after adding elements:");
//        DisplayList(list);

//        // 2. Remove elements
//        // Remove by value
//        list.Remove("Learning");
//        // Remove by index
//        list.RemoveAt(0);

//        Console.WriteLine("\nArrayList after removing elements:");
//        DisplayList(list);
//    }

//    // Helper method to display elements
//    static void DisplayList(ArrayList list)
//    {
//        foreach (var item in list)
//        {
//            Console.Write(item + "  ");
//        }
//        Console.WriteLine();
//    }
//}