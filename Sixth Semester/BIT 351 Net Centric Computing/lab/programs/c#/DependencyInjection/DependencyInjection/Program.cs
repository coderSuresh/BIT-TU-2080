using Microsoft.Extensions.DependencyInjection;

public interface IPaymentProcessing
{
   void ProcessPayment(decimal amount);
}

public class PaymentService: IPaymentProcessing
{
    public void ProcessPayment(decimal amount)
    {
        Console.WriteLine($"Processing payment of ${amount}");
    }
}

public class Booking
{
    private readonly IPaymentProcessing _paymentProcessing;

    public Booking(IPaymentProcessing paymentProcessing)
    {
        _paymentProcessing = paymentProcessing;
    }

    public void Pay(decimal amount)
    {
        _paymentProcessing.ProcessPayment(amount);
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        var services = new ServiceCollection();
        services.AddTransient<IPaymentProcessing, PaymentService>();
        services.AddTransient<Booking>();

        using ServiceProvider provider = services.BuildServiceProvider();

        Booking booking = provider.GetRequiredService<Booking>();
        booking.Pay(100.00m);
    }
}