//using System;

//// Base Class
//public class Shape
//{
//    // 'virtual' allows this method to be overridden in derived classes
//    public virtual double Area()
//    {
//        return 0;
//    }
//}

//// Derived Class: Circle
//public class Circle : Shape
//{
//    public double Radius { get; set; }

//    public Circle(double radius) => Radius = radius;

//    public override double Area() => Math.PI * Radius * Radius;
//}

//// Derived Class: Rectangle
//public class Rectangle : Shape
//{
//    public double Width { get; set; }
//    public double Height { get; set; }

//    public Rectangle(double width, double height)
//    {
//        Width = width;
//        Height = height;
//    }

//    public override double Area() => Width * Height;
//}

//class Program
//{
//    static void Main()
//    {
//        // Using Polymorphism to call the overridden methods
//        Shape s1 = new Circle(5);
//        Shape s2 = new Rectangle(4, 6);

//        Console.WriteLine($"Circle Area: {s1.Area():F2}");
//        Console.WriteLine($"Rectangle Area: {s2.Area():F2}");
//    }
//}