//using System;

//class InvalidOperatorException : Exception
//{
//    public InvalidOperatorException(string message) : base(message)
//    {
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        try
//        {
//            Console.Write("Enter first number: ");
//            int num1 = Convert.ToInt32(Console.ReadLine());

//            Console.Write("Enter operator (+, -, *, /): ");
//            char op = Convert.ToChar(Console.ReadLine());

//            Console.Write("Enter second number: ");
//            int num2 = Convert.ToInt32(Console.ReadLine());

//            switch (op)
//            {
//                case '+':
//                    Console.WriteLine("Result = " + (num1 + num2));
//                    break;

//                case '-':
//                    Console.WriteLine("Result = " + (num1 - num2));
//                    break;

//                case '*':
//                    Console.WriteLine("Result = " + (num1 * num2));
//                    break;

//                case '/':
//                    Console.WriteLine("Result = " + (num1 / num2));
//                    break;

//                default:
//                    throw new InvalidOperatorException("Invalid operator entered.");
//            }
//        }
//        catch (DivideByZeroException)
//        {
//            Console.WriteLine("Error: Cannot divide by zero.");
//        }
//        catch (FormatException)
//        {
//            Console.WriteLine("Error: Please enter valid numbers.");
//        }
//        catch (InvalidOperatorException ex)
//        {
//            Console.WriteLine("Error: " + ex.Message);
//        }

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}