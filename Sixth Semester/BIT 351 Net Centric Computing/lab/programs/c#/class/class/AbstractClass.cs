//using System;

//// Abstract Class
//public abstract class Animal
//{
//    // Abstract method: No implementation allowed here, 
//    // must be overridden by derived classes.
//    public abstract void Sound();

//    // Concrete method: Has implementation, 
//    // inherited by derived classes.
//    public void Sleep()
//    {
//        Console.WriteLine("The animal is sleeping: Zzzzz...");
//    }
//}

//// Derived Class: Dog
//public class Dog : Animal
//{
//    public override void Sound()
//    {
//        Console.WriteLine("Dog says: Woof Woof!");
//    }
//}

//// Derived Class: Cat
//public class Cat : Animal
//{
//    public override void Sound()
//    {
//        Console.WriteLine("Cat says: Meow Meow!");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        Dog myDog = new Dog();
//        Cat myCat = new Cat();

//        myDog.Sound();
//        myDog.Sleep(); // Inherited concrete method

//        Console.WriteLine();

//        myCat.Sound();
//        myCat.Sleep(); // Inherited concrete method
//    }
//}