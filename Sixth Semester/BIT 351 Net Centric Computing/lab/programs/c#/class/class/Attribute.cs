//using System;
//using System.Reflection;

//// 1. Define the Custom Attribute
//// AttributeUsage specifies it can be applied to Classes and Methods
//[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method)]
//public class InfoAttribute : Attribute
//{
//    public string Description { get; }
//    public InfoAttribute(string description) => Description = description;
//}

//// 2. Apply the attribute
//[Info("This is a sample class.")]
//public class MyService
//{
//    [Info("This is a sample method.")]
//    public void Execute() { }
//}

//class Program
//{
//    static void Main()
//    {
//        Type type = typeof(MyService);

//        // 3. Display Metadata using Reflection (Class)
//        var classAttr = (InfoAttribute)Attribute.GetCustomAttribute(type, typeof(InfoAttribute))!;
//        Console.WriteLine($"Class: {type.Name}, Info: {classAttr.Description}");

//        // Display Metadata using Reflection (Method)
//        MethodInfo method = type.GetMethod("Execute")!;
//        var methodAttr = (InfoAttribute)Attribute.GetCustomAttribute(method, typeof(InfoAttribute))!;
//        Console.WriteLine($"Method: {method.Name}, Info: {methodAttr.Description}");
//    }
//}