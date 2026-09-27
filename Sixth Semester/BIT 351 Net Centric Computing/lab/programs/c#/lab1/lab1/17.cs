//using System;

//class Pair<T1, T2>
//{
//    public T1 First;
//    public T2 Second;

//    public Pair(T1 first, T2 second)
//    {
//        First = first;
//        Second = second;
//    }

//    public void Display()
//    {
//        Console.WriteLine("First: " + First);
//        Console.WriteLine("Second: " + Second);
//    }
//}

//class Program
//{
//    static T FindMax<T>(T a, T b) where T : IComparable<T>
//    {
//        if (a.CompareTo(b) > 0)
//            return a;
//        else
//            return b;
//    }

//    static void Main()
//    {
//        Pair<string, int> student = new Pair<string, int>("Ram", 85);
//        student.Display();

//        Console.WriteLine("\nMaximum: " + FindMax(25, 40));

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}