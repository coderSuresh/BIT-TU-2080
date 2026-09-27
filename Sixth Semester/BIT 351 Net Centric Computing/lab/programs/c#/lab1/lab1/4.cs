//using System;

//class BankAccount
//{
//    public string AccountHolder;
//    public double Balance;
//    public static int AccountCount = 0;

//    // Default Constructor
//    public BankAccount()
//    {
//        AccountHolder = "N/A";
//        Balance = 0;
//        AccountCount++;
//    }

//    // Parameterized Constructor
//    public BankAccount(string holder, double balance)
//    {
//        AccountHolder = holder;
//        Balance = balance;
//        AccountCount++;
//    }

//    // Copy Constructor
//    public BankAccount(BankAccount other)
//    {
//        AccountHolder = other.AccountHolder;
//        Balance = other.Balance;
//        AccountCount++;
//    }

//    public void Show() => Console.WriteLine($"{AccountHolder}: Rs. {Balance}");
//}

//class Program
//{
//    static void Main()
//    {
//        BankAccount a1 = new BankAccount("Suresh", 3000);
//        BankAccount a2 = new BankAccount(a1); // Copy constructor usage

//        a1.Show();
//        a2.Show();
//        Console.WriteLine("Total Accounts: " + BankAccount.AccountCount);
//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}