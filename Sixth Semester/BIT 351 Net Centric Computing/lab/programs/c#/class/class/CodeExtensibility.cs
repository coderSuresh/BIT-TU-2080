//using System;

//// 1. The "Open" abstraction
//public abstract class PaymentProcessor
//{
//    public abstract void ProcessPayment(double amount);
//}

//// 2. Existing functionality
//public class CreditCardProcessor : PaymentProcessor
//{
//    public override void ProcessPayment(double amount)
//        => Console.WriteLine($"Processing ${amount} via Credit Card.");
//}

//public class PayPalProcessor : PaymentProcessor
//{
//    public override void ProcessPayment(double amount)
//        => Console.WriteLine($"Processing ${amount} via PayPal.");
//}

//// 3. EXTENSION: Adding a new class without modifying existing code
//public class CryptoProcessor : PaymentProcessor
//{
//    public override void ProcessPayment(double amount)
//        => Console.WriteLine($"Processing ${amount} via Cryptocurrency.");
//}

//class Program
//{
//    static void Main()
//    {
//        // Even if we add new classes later, this loop logic remains untouched!
//        PaymentProcessor[] payments = new PaymentProcessor[]
//        {
//            new CreditCardProcessor(),
//            new PayPalProcessor(),
//            new CryptoProcessor() // We just add the new type here
//        };

//        foreach (var p in payments)
//        {
//            p.ProcessPayment(100.0);
//        }
//    }
//}