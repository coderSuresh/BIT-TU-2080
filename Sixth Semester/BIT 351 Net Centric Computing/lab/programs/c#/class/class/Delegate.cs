//using System;

//// 1. Define the delegate
//// This defines a signature: it accepts two ints and returns an int
//public delegate int MathOperation(int a, int b);

//class Program
//{
//    // Methods to be used by the delegate
//    public static int Add(int a, int b) => a + b;
//    public static int Subtract(int a, int b) => a - b;
//    public static int Multiply(int a, int b) => a * b;

//    static void Main()
//    {
//        // 2. Instantiate the delegate and assign methods
//        MathOperation opAdd = Add;
//        MathOperation opSub = Subtract;
//        MathOperation opMul = Multiply;

//        // 3. Execute the methods via the delegate
//        int x = 20, y = 10;

//        Console.WriteLine($"Addition: {opAdd(x, y)}");
//        Console.WriteLine($"Subtraction: {opSub(x, y)}");
//        Console.WriteLine($"Multiplication: {opMul(x, y)}");
//    }
//}