//using System;
//using System.IO;

//class Program
//{
//    static void Main()
//    {
//        string filePath = "employees.txt";

//        // Writing employee details
//        Console.WriteLine("--- Storing Employee Data ---");
//        using (StreamWriter writer = new StreamWriter(filePath))
//        {
//            writer.WriteLine("EmpID,Name,Department");
//            writer.WriteLine("101,John Doe,Engineering");
//            writer.WriteLine("102,Jane Smith,Marketing");
//            writer.WriteLine("103,Sam Wilson,HR");
//        }
//        Console.WriteLine("Employee details saved to 'employees.txt'.\n");

//        // Retrieving employee details
//        Console.WriteLine("--- Retrieving Employee Data ---");
//        if (File.Exists(filePath))
//        {
//            using (StreamReader reader = new StreamReader(filePath))
//            {
//                string? line;
//                while ((line = reader.ReadLine()) != null)
//                {
//                    Console.WriteLine(line);
//                }
//            }
//        }
//        else
//        {
//            Console.WriteLine("Error: File not found.");
//        }
//    }
//}