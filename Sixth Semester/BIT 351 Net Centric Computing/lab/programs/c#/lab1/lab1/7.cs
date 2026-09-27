//using System;

//class TemperatureLog
//{
//    private double[] temperatures = new double[7];

//    public double this[int index]
//    {
//        get
//        {
//            if (index >= 0 && index < 7)
//                return temperatures[index];
//            else
//                throw new IndexOutOfRangeException("Invalid day index!");
//        }

//        set
//        {
//            if (index >= 0 && index < 7)
//                temperatures[index] = value;
//            else
//                throw new IndexOutOfRangeException("Invalid day index!");
//        }
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        TemperatureLog log = new TemperatureLog();

//        for (int i = 0; i < 7; i++)
//        {
//            Console.Write("Enter temperature for day " + i + ": ");
//            log[i] = Convert.ToDouble(Console.ReadLine());
//        }

//        Console.WriteLine("\nTemperature Record:");
//        for (int i = 0; i < 7; i++)
//        {
//            Console.WriteLine("Day " + i + ": " + log[i] + "°C");
//        }
//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}