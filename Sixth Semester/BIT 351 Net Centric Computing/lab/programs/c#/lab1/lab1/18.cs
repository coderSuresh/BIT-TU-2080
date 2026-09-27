//using System;
//using System.IO;

//class Program
//{
//    static void Main()
//    {
//        string fileName = "records.txt";

//        StreamWriter writer = new StreamWriter(fileName);

//        double total = 0;

//        for (int i = 1; i <= 3; i++)
//        {
//            Console.Write("Enter student name: ");
//            string name = Console.ReadLine();

//            Console.Write("Enter marks: ");
//            double marks = Convert.ToDouble(Console.ReadLine());

//            writer.WriteLine(name + "," + marks);
//            total += marks;
//        }

//        writer.Close();

//        Console.WriteLine("\nStudent Records:");
//        StreamReader reader = new StreamReader(fileName);

//        string line;
//        while ((line = reader.ReadLine()) != null)
//        {
//            Console.WriteLine(line);
//        }

//        reader.Close();

//        Console.WriteLine("\nAverage Marks: " + (total / 3));
//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}