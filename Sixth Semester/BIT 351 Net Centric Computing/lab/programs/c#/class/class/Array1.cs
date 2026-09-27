using System;
using System.Linq;

class ArrayOne
{
    int[] numbers = new int[10];

    public void StoreNumbers()
    {
        Console.WriteLine("Enter 10 integers:");
        for (int i = 0; i < numbers.Length; i++)
        {
            Console.Write($"Number {i + 1}: ");
            numbers[i] = int.Parse(Console.ReadLine());
        }
    }

    public void CalculateStatistics()
    {
        int sum = numbers.Sum();
        double average = numbers.Average();
        int max = numbers.Max();
        int min = numbers.Min();

        // Display results
        Console.WriteLine("\n--- Statistics ---");
        Console.WriteLine($"Sum:     {sum}");
        Console.WriteLine($"Average: {average}");
        Console.WriteLine($"Max:     {max}");
        Console.WriteLine($"Min:     {min}");
    }
}