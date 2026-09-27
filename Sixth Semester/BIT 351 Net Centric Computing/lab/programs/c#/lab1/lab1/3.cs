//using System;

//class PrimeCheck
//{
//    static void Main()
//    {
//        Console.Write("Enter a number: ");
//        int num = Convert.ToInt32(Console.ReadLine());
//        bool isPrime = true;

//        if (num <= 1)
//        {
//            isPrime = false;
//        }
//        else
//        {
//            for (int i = 2; i <= Math.Sqrt(num); i++)
//            {
//                if (num % i == 0)
//                {
//                    isPrime = false;
//                    break;
//                }
//            }
//        }

//        Console.WriteLine(isPrime ? $"{num} is Prime" : $"{num} is Not Prime");
//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}