//using System;

//// 1. Defining the Interface
//public interface IShape
//{
//    void Draw(); // All classes must implement this method
//}

//// 2. Implementing in Circle
//public class Circle : IShape
//{
//    public void Draw() => Console.WriteLine("Drawing a Circle.");
//}

//// 3. Implementing in Square
//public class Square : IShape
//{
//    public void Draw() => Console.WriteLine("Drawing a Square.");
//}

//// 4. Implementing in Triangle
//public class Triangle : IShape
//{
//    public void Draw() => Console.WriteLine("Drawing a Triangle.");
//}

//class Program
//{
//    static void Main()
//    {
//        // Polymorphism: Using the interface type to hold different objects
//        IShape[] shapes = new IShape[] { new Circle(), new Square(), new Triangle() };

//        foreach (IShape shape in shapes)
//        {
//            shape.Draw();
//        }
//    }
//}