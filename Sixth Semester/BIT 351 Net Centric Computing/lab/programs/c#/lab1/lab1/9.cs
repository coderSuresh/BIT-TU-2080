//using System;

//class Employee
//{
//    public virtual void CalculateBonus()
//    {
//        Console.WriteLine("Employee Bonus: Rs. 5,000");
//    }

//    public void PrintPolicy()
//    {
//        Console.WriteLine("Employee Leave Policy");
//    }
//}

//class Manager : Employee
//{
//    public override void CalculateBonus()
//    {
//        Console.WriteLine("Manager Bonus: Rs. 15,000");
//    }

//    public new void PrintPolicy()
//    {
//        Console.WriteLine("Manager Leave Policy");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        Employee emp = new Manager();

//        emp.CalculateBonus();   // Overridden method
//        emp.PrintPolicy();      // Hidden method

//        Console.WriteLine();

//        Manager mgr = new Manager();
//        mgr.CalculateBonus();
//        mgr.PrintPolicy();

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}