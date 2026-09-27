//using System;

//struct Complex
//{
//    public double Real;
//    public double Imaginary;

//    public Complex(double real, double imaginary)
//    {
//        Real = real;
//        Imaginary = imaginary;
//    }

//    public Complex Add(Complex c)
//    {
//        return new Complex(Real + c.Real, Imaginary + c.Imaginary);
//    }

//    public void Display()
//    {
//        Console.WriteLine(Real + " + " + Imaginary + "i");
//    }
//}

//enum Operation
//{
//    Add,
//    Subtract,
//    Multiply,
//    Divide
//}

//class Program
//{
//    static void Main()
//    {
//        Complex c1 = new Complex(2, 3);
//        Complex c2 = new Complex(4, 5);

//        Complex result = c1.Add(c2);

//        Console.Write("Sum of Complex Numbers: ");
//        result.Display();

//        int a = 10, b = 5;
//        Operation op = Operation.Multiply;

//        switch (op)
//        {
//            case Operation.Add:
//                Console.WriteLine("Addition: " + (a + b));
//                break;

//            case Operation.Subtract:
//                Console.WriteLine("Subtraction: " + (a - b));
//                break;

//            case Operation.Multiply:
//                Console.WriteLine("Multiplication: " + (a * b));
//                break;

//            case Operation.Divide:
//                Console.WriteLine("Division: " + (a / b));
//                break;
//        }

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}