//using System;

//// Define an attribute that uses both positional and named parameters
//[AttributeUsage(AttributeTargets.Class)]
//public class SoftwareInfoAttribute : Attribute
//{
//    // Positional: Must be provided via constructor
//    public string Name { get; }

//    // Named: Optional public property
//    public string Developer { get; set; } = "Unknown";
//    public int Version { get; set; } = 1;

//    public SoftwareInfoAttribute(string name)
//    {
//        Name = name;
//    }
//}

//// Applying the attribute:
//// "ProjectX" is positional (first argument)
//// Developer and Version are named parameters
//[SoftwareInfo("ProjectX", Developer = "Alice", Version = 2)]
//public class AppConfig { }

//class Program
//{
//    static void Main()
//    {
//        Type type = typeof(AppConfig);
//        var attr = (SoftwareInfoAttribute)Attribute.GetCustomAttribute(type, typeof(SoftwareInfoAttribute))!;

//        Console.WriteLine($"App: {attr.Name}");
//        Console.WriteLine($"Developer: {attr.Developer}");
//        Console.WriteLine($"Version: {attr.Version}");
//    }
//}