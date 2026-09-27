//using System;

//abstract class Employee
//{
//    public string Name;
//    public double BasicSalary;

//    public Employee(string name, double salary)
//    {
//        Name = name;
//        BasicSalary = salary;
//    }

//    public abstract double CalculateSalary();

//    public void DisplayDetails()
//    {
//        Console.WriteLine("Name: " + Name);
//        Console.WriteLine("Salary: Rs. " + CalculateSalary());
//    }
//}

//class PermanentEmployee : Employee
//{
//    public PermanentEmployee(string name, double salary)
//        : base(name, salary)
//    {
//    }

//    public override double CalculateSalary()
//    {
//        return BasicSalary + 5000;
//    }
//}

//sealed class ContractEmployee : Employee
//{
//    public ContractEmployee(string name, double salary)
//        : base(name, salary)
//    {
//    }

//    public override double CalculateSalary()
//    {
//        return BasicSalary;
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        Employee emp1 = new PermanentEmployee("Suresh", 30000);
//        Employee emp2 = new ContractEmployee("Luna", 25000);

//        emp1.DisplayDetails();
//        Console.WriteLine();

//        emp2.DisplayDetails();

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}