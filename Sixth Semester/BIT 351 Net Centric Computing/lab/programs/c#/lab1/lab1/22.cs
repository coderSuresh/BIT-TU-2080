using System;
using System.Threading.Tasks;

class Program
{
    static async Task PrepareFoodAsync()
    {
        Console.WriteLine("Preparing food...");
        await Task.Delay(3000);
        Console.WriteLine("Food is ready.");
    }

    static async Task ArrangeDeliveryAsync()
    {
        Console.WriteLine("Arranging delivery...");
        await Task.Delay(2000);
        Console.WriteLine("Delivery partner assigned.");
    }

    static async Task DeliverOrderAsync()
    {
        Console.WriteLine("Order delivered successfully.");
        await Task.CompletedTask;
    }

    static async Task Main()
    {
        try
        {
            await Task.WhenAll(
                PrepareFoodAsync(),
                ArrangeDeliveryAsync()
            );

            await DeliverOrderAsync();
        }
        catch (Exception ex)
        {
            Console.WriteLine("Error: " + ex.Message);
        }

        Console.WriteLine("Suresh Dahal - 23");
    }
}