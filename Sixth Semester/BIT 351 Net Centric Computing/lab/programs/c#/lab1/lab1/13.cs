//using System;

//interface IMovable
//{
//    void Move();
//}

//interface IFlyable
//{
//    void Fly();
//}

//class Bird : IMovable, IFlyable
//{
//    public void Move()
//    {
//        Console.WriteLine("Bird is moving.");
//    }

//    public void Fly()
//    {
//        Console.WriteLine("Bird is flying.");
//    }
//}

//class Car : IMovable
//{
//    public void Move()
//    {
//        Console.WriteLine("Car is moving.");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        IMovable movable;

//        movable = new Bird();
//        movable.Move();

//        movable = new Car();
//        movable.Move();

//        IFlyable flyable = new Bird();
//        flyable.Fly();

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}