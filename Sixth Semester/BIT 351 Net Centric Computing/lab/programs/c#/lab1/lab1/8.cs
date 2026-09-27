//using System;

//class Vehicle
//{
//    public string Brand;

//    public Vehicle(string brand)
//    {
//        Brand = brand;
//    }

//    public virtual void Start()
//    {
//        Console.WriteLine(Brand + " vehicle is starting.");
//    }
//}

//class Car : Vehicle
//{
//    public int NumberOfDoors;

//    public Car(string brand, int doors) : base(brand)
//    {
//        NumberOfDoors = doors;
//    }

//    public override void Start()
//    {
//        base.Start();
//        Console.WriteLine("Car has " + NumberOfDoors + " doors.");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        Car car = new Car("Toyota", 4);

//        car.Start();

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}