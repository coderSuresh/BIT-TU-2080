//using System;
//using System.Collections.Generic;
//using System.Linq;

//class Student
//{
//    public string Name { get; set; }
//    public int Marks { get; set; }
//}

//class Program
//{
//    static void Main()
//    {
//        List<Student> students = new List<Student>
//        {
//            new Student { Name = "Ram", Marks = 80 },
//            new Student { Name = "Sita", Marks = 92 },
//            new Student { Name = "Hari", Marks = 68 },
//            new Student { Name = "Gita", Marks = 85 }
//        };

//        var passed = students.Where(s => s.Marks > 75);

//        var sorted = students.OrderByDescending(s => s.Marks);

//        double average = students.Average(s => s.Marks);

//        string topper = students
//                        .OrderByDescending(s => s.Marks)
//                        .First().Name;

//        Console.WriteLine("Students scoring above 75:");
//        foreach (var s in passed)
//        {
//            Console.WriteLine(s.Name + " - " + s.Marks);
//        }

//        Console.WriteLine("\nSorted by Marks:");
//        foreach (var s in sorted)
//        {
//            Console.WriteLine(s.Name + " - " + s.Marks);
//        }

//        Console.WriteLine("\nAverage Marks: " + average);
//        Console.WriteLine("Topper: " + topper);

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}