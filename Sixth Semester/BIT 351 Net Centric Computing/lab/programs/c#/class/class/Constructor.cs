public class Employee
{
    public string Name { get; set; }
    public double Salary { get; set; }

    public Employee()
    {
        Name = "Unknown";
        Salary = 0.0;
    }

    public Employee(string name, double salary)
    {
        Name = name;
        Salary = salary;
    }

    public Employee(Employee other)
    {
        Name = other.Name;
        Salary = other.Salary;
    }

    public void Display()
    {
        Console.WriteLine($"Name: {Name}, Salary: ${Salary}");
    }
}
