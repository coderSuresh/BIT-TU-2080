using System;
using System.Collections.Generic;
using System.IO;

internal class StudentManagementSystem
{
    // 1. Class & Constructor & Properties
    public class Student
    {
        public int Id { get; set; }
        public string Name { get; set; }

        public Student(int id, string name)
        {
            Id = id;
            Name = name;
        }
    }

    class Program
    {
        static List<Student> students = new List<Student>();
        const string filePath = "students.txt";

        static void Main()
        {
            bool running = true;
            while (running)
            {
                Console.WriteLine("\n--- Student Management System ---");
                Console.WriteLine("1. Add Student | 2. Show All | 3. Save to File | 4. Exit");
                string choice = Console.ReadLine() ?? "";

                try // 6. Exception Handling
                {
                    switch (choice)
                    {
                        case "1": AddStudent(); break;
                        case "2": ShowStudents(); break;
                        case "3": SaveToFile(); break;
                        case "4": running = false; break;
                        default: Console.WriteLine("Invalid choice."); break;
                    }
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"Error: {ex.Message}");
                }
            }
        }

        static void AddStudent()
        {
            Console.Write("Enter ID: ");
            int id = int.Parse(Console.ReadLine()!);
            Console.Write("Enter Name: ");
            string name = Console.ReadLine()!;
            students.Add(new Student(id, name));
        }

        static void ShowStudents()
        {
            foreach (var s in students) Console.WriteLine($"ID: {s.Id}, Name: {s.Name}");
        }

        static void SaveToFile() // 5. File I/O
        {
            using (StreamWriter sw = new StreamWriter(filePath))
            {
                foreach (var s in students) sw.WriteLine($"{s.Id},{s.Name}");
            }
            Console.WriteLine("Data saved to file.");
        }
    }
}