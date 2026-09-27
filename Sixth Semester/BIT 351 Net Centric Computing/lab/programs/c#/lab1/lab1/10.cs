//using System;
//using System.Collections.Generic;

//abstract class PaymentMethod
//{
//    public abstract void Pay(double amount);
//}

//class CreditCardPayment : PaymentMethod
//{
//    public override void Pay(double amount)
//    {
//        Console.WriteLine("Paid Rs. " + amount + " using Credit Card.");
//    }
//}

//class CashPayment : PaymentMethod
//{
//    public override void Pay(double amount)
//    {
//        Console.WriteLine("Paid Rs. " + amount + " in Cash.");
//    }
//}

//class MobileWalletPayment : PaymentMethod
//{
//    public override void Pay(double amount)
//    {
//        Console.WriteLine("Paid Rs. " + amount + " using Mobile Wallet.");
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        List<PaymentMethod> payments = new List<PaymentMethod>()
//        {
//            new CreditCardPayment(),
//            new CashPayment(),
//            new MobileWalletPayment()
//        };

//        foreach (PaymentMethod payment in payments)
//        {
//            payment.Pay(3000);
//        }

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}