//using System;
//using System.Collections.Generic;

//class Program
//{
//    static void Main()
//    {
//        // Contact Book using Dictionary
//        Dictionary<string, string> contacts = new Dictionary<string, string>();

//        contacts.Add("Suresh", "9800000001");
//        contacts.Add("Luna", "9800000002");
//        contacts.Add("Hari", "9800000003");


//        Console.WriteLine("Searching for Suresh:");
//        if (contacts.ContainsKey("Suresh"))
//            Console.WriteLine("Phone: " + contacts["Suresh"]);

//        contacts.Remove("Hari");

//        Console.WriteLine("\nContact List:");
//        foreach (var contact in contacts)
//        {
//            Console.WriteLine(contact.Key + " : " + contact.Value);
//        }

//        // Customer Ticket System using Queue
//        Queue<string> tickets = new Queue<string>();

//        tickets.Enqueue("Ticket 101");
//        tickets.Enqueue("Ticket 102");
//        tickets.Enqueue("Ticket 103");

//        Console.WriteLine("\nServing: " + tickets.Dequeue());

//        Console.WriteLine("Remaining Tickets:");
//        foreach (string ticket in tickets)
//        {
//            Console.WriteLine(ticket);
//        }

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}