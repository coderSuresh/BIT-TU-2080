//using System;

//// --- Part 1: Method Overloading ---
//public class Calculator
//{
//    // Same name "Add", different parameters
//    public int Add(int a, int b) => a + b;
//    public double Add(double a, double b) => a + b;
//}

//// --- Part 2: Method Overriding ---
//public class Shape
//{
//    // 'virtual' allows overriding
//    public virtual void Draw() => Console.WriteLine("Drawing a generic shape.");
//}

//public class Circle : Shape
//{
//    // 'override' replaces the base behavior
//    public override void Draw() => Console.WriteLine("Drawing a Circle.");
//}

//class Program
//{
//    static void Main()
//    {
//        // Demonstrating Overloading
//        Calculator calc = new Calculator();
//        Console.WriteLine("--- Overloading ---");
//        Console.WriteLine($"Sum (int): {calc.Add(5, 10)}");
//        Console.WriteLine($"Sum (double): {calc.Add(5.5, 2.3)}");

//        // Demonstrating Overriding
//        Console.WriteLine("\n--- Overriding ---");
//        Shape myShape = new Circle();
//        myShape.Draw(); // Executes the Circle version
//    }
//}