//using System;

//// Base Class
//public class Vehicle
//{
//    // 'virtual' allows derived classes to override this method
//    public virtual void Run()
//    {
//        Console.WriteLine("The vehicle is moving.");
//    }
//}

//// Derived Class: Car
//public class Car : Vehicle
//{
//    public override void Run() => Console.WriteLine("The car is driving on the road.");
//}

//// Derived Class: Bike
//public class Bike : Vehicle
//{
//    public override void Run() => Console.WriteLine("The bike is speeding on the highway.");
//}

//// Derived Class: Bus
//public class Bus : Vehicle
//{
//    public override void Run() => Console.WriteLine("The bus is carrying passengers on a set route.");
//}

//class Program
//{
//    static void Main()
//    {
//        // Polymorphic behavior:
//        // A base class reference (Vehicle) can hold any derived class object.
//        Vehicle[] fleet = new Vehicle[] { new Car(), new Bike(), new Bus() };

//        foreach (Vehicle v in fleet)
//        {
//            // Runtime polymorphism: The correct 'Run' method is called
//            // based on the actual object instance.
//            v.Run();
//        }
//    }
//}