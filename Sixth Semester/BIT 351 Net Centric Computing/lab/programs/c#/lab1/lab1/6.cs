//using System;
//using System.Text;

//class Program
//{
//    static void Main()
//    {
//        // 1. Array declaration and iteration
//        string[] subjects = { "net centric", "web tech", "database" };
//        int[] marks = { 85, 90, 78 };

//        Console.WriteLine("--- Array Elements ---");
//        for (int i = 0; i < subjects.Length; i++)
//        {
//            Console.WriteLine($"{subjects[i]}: {marks[i]}");
//        }

//        // 2. String manipulation
//        string title = "  C# Programming Lab  ";
//        string trimmed = title.Trim();
//        string upper = trimmed.ToUpper();
//        Console.WriteLine($"\nOriginal: '{title}'");
//        Console.WriteLine($"Processed String: {upper}");

//        // 3. StringBuilder usage for efficient string building
//        StringBuilder sb = new StringBuilder();
//        sb.Append("Status: ");
//        sb.Append("All ");
//        sb.Append(subjects.Length);
//        sb.Append(" subjects processed successfully.");

//        Console.WriteLine($"\n{sb.ToString()}");
//        Console.WriteLine("Suresh Dahal - 23");

//    }
//}