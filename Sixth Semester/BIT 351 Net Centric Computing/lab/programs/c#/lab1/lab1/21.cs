//using System;
//using System.Reflection;

//[AttributeUsage(AttributeTargets.Method)]
//class ReviewedAttribute : Attribute
//{
//    public string ReviewerName { get; }
//    public string Date { get; set; }

//    public ReviewedAttribute(string reviewerName)
//    {
//        ReviewerName = reviewerName;
//    }
//}

//class Sample
//{
//    [Reviewed("Suresh", Date = "2026-08-01")]
//    public void Method1()
//    {
//    }

//    [Reviewed("Luna", Date = "2026-08-02")]
//    public void Method2()
//    {
//    }
//}

//class Program
//{
//    static void Main()
//    {
//        Type type = typeof(Sample);

//        foreach (MethodInfo method in type.GetMethods())
//        {
//            ReviewedAttribute attr =
//                (ReviewedAttribute)Attribute.GetCustomAttribute(
//                    method, typeof(ReviewedAttribute));

//            if (attr != null)
//            {
//                Console.WriteLine("Method: " + method.Name);
//                Console.WriteLine("Reviewer: " + attr.ReviewerName);
//                Console.WriteLine("Date: " + attr.Date);
//                Console.WriteLine();
//            }
//        }

//        Console.WriteLine("Suresh Dahal - 23");
//    }
//}