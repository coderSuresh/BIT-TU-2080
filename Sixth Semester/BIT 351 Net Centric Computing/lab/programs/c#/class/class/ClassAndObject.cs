class Student
{
    private int _id;
    private string _name;
    private double _marks;

    public int Id
    {
        get
        {
            return _id;
        }

        set
        {
            _id = value;
        }
    }

    public string Name
    {
        get { return _name; }

        set
        {
            _name = value;
        }
    }

    public double Marks
    {
        get { return _marks; }

        set { _marks = value; }
    }

    public Student(int id, string name, double marks)
    {
        Id = id;
        Name = name;
        Marks = marks;
    }

    public void Display()
    {
        Console.WriteLine($"ID: {Id} | Name: {Name} | Marks: {Marks}");
    }
}