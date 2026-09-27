//using System;
//using System.IO;

//class Program
//{
//    static void Main()
//    {
//        string filePath = "student_data.txt";

//        // 1. Write student data into a file
//        // 'using' block ensures the file is closed and saved correctly
//        using (StreamWriter writer = new StreamWriter(filePath))
//        {
//            writer.WriteLine("ID: 101, Name: Alice, Marks: 88.5");
//            writer.WriteLine("ID: 102, Name: Bob, Marks: 92.0");
//            writer.WriteLine("ID: 103, Name: Charlie, Marks: 79.5");
//        }
//        Console.WriteLine("Data written to file successfully.\n");

//        // 2. Read and display file content
//        Console.WriteLine("Reading data from file:");
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
//            Console.WriteLine("File not found.");
//        }
//    }
//}