//using System;

//// Generic Class definition
//public class Box<T>
//{
//    private T _data;

//    // Constructor to store value
//    public Box(T data)
//    {
//        _data = data;
//    }

//    // Method to display stored value
//    public void Display()
//    {
//        Console.WriteLine($"Stored value: {_data} (Type: {typeof(T)})");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        // Storing different types in the same Generic class
//        Box<int> intBox = new Box<int>(123);
//        Box<string> stringBox = new Box<string>("Hello C#");
//        Box<double> doubleBox = new Box<double>(45.67);

//        intBox.Display();
//        stringBox.Display();
//        doubleBox.Display();
//    }
//}