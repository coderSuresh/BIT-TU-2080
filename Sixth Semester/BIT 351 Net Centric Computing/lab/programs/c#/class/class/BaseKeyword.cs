//using System;

//namespace StudentName
//{
//    // Base Class
//    public class Person
//    {
//        public string Name { get; set; }

//        // Base constructor
//        public Person(string name)
//        {
//            Name = name;
//            Console.WriteLine("Person constructor called.");
//        }

//        public virtual void DisplayInfo()
//        {
//            Console.WriteLine($"Name: {Name}");
//        }
//    }

//    // Derived Class
//    public class Student : Person
//    {
//        public int StudentId { get; set; }

//        // Use 'base' to call the constructor of the Person class
//        public Student(string name, int id) : base(name)
//        {
//            StudentId = id;
//            Console.WriteLine("Student constructor called.");
//        }

//        public override void DisplayInfo()
//        {
//            // Use 'base' to call the original method from the Person class
//            base.DisplayInfo();
//            Console.WriteLine($"Student ID: {StudentId}");
//        }
//    }

//    class Program
//    {
//        static void Main()
//        {
//            Student s = new Student("Alice", 101);
//            Console.WriteLine("\nDisplaying Info:");
//            s.DisplayInfo();
//        }
//    }
//}