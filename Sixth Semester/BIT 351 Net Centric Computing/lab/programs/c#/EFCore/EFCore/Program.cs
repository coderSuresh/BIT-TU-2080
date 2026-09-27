using EFCore;
using Microsoft.EntityFrameworkCore;

class Program
{
    static void Main()
    {
       StudentContext context = new StudentContext();

        context.Database.EnsureCreated();

        //Student s = new Student { Name = "John Doe", Age = 20 };

        //context.Students.Add(s);
        //context.SaveChanges();

        //var std1 = context.Students.First(s => s.Id == 1);
        //if(std1 != null)
        //{
        //    std1.Name = "Suresh Dahal";
        //    context.SaveChanges();
        //}

        //var std2 = context.Students.FirstOrDefault(s => s.Id == 2);        

        //if(std2 != null)
        //{
        //    context.Students.Remove(std2);
        //    context.SaveChanges();
        //}

        var students = context.Students.ToList();

        Console.WriteLine("Id Name\n=========================");

        foreach (var student in students)
        {
            Console.WriteLine($"{student.Id} {student.Name}");
        }

        Console.ReadLine();

    }
}