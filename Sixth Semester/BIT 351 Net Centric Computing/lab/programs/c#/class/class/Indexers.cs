//using System;

//public class BookStore
//{
//    // Internal array to store the data
//    private string[] books = new string[5];

//    // Defining the Indexer
//    // This allows the instance of BookStore to be accessed like an array
//    public string this[int index]
//    {
//        get
//        {
//            if (index >= 0 && index < books.Length)
//                return books[index];
//            else
//                return "Invalid Index";
//        }
//        set
//        {
//            if (index >= 0 && index < books.Length)
//                books[index] = value;
//            else
//                Console.WriteLine("Cannot set: Index out of bounds.");
//        }
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        BookStore store = new BookStore();

//        // Storing book names using the indexer
//        store[0] = "The Unseen Heartbeat";
//        store[1] = "1984";
//        store[2] = "To Kill a Mockingbird";
//        store[3] = "The Hobbit";
//        store[4] = "Brave New World";

//        // Accessing and displaying books using the indexer
//        Console.WriteLine("Books in the Bookstore:");
//        for (int i = 0; i < 5; i++)
//        {
//            Console.WriteLine($"Book {i}: {store[i]}");
//        }
//    }
//}