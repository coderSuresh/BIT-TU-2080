//using System;

//class Employee
//{
//    private string name;
//    private double salary;

//    // 1. Read-Write Property with Validation
//    public string Name
//    {
//        get { return name; }
//        set { name = string.IsNullOrWhiteSpace(value) ? "Unknown" : value; }
//    }

//    // 2. Read-Write Property with Range Check
//    public double Salary
//    {
//        get { return salary; }
//        set { salary = value < 0 ? 0 : value; }
//    }

//    // 3. Computed Read-Only Property
//    public double AnnualSalary => salary * 12;
//}

//class Program
//{
//    static void Main()
//    {
//        Employee emp = new Employee();

//        // Testing write accessor and validation
//        emp.Name = "Suresh Dahal";
//        emp.Salary = 50000;

//        // Testing read accessor and computed property
//        Console.WriteLine($"Name: {emp.Name}");
//        Console.WriteLine($"Monthly Salary: {emp.Salary}");
//        Console.WriteLine($"Annual Salary (Computed): {emp.AnnualSalary}");

//        // Testing invalid input rejection
//        emp.Salary = -1000;
//        Console.WriteLine($"After invalid assignment - Salary: {emp.Salary}, Annual: {emp.AnnualSalary}");
//    }
//}