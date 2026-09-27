using Microsoft.Data.SqlClient;

internal class AdoNetCrud
{
    private static void Create(SqlConnection con) {
        string query = "INSERT INTO Students (Name, Age) VALUES (@Name, @Age)";
        SqlCommand cmd = new SqlCommand(query, con);

        cmd.Parameters.AddWithValue("@Name", "Suresh Dahal");
        cmd.Parameters.AddWithValue("@Age", 26);

        cmd.ExecuteNonQuery();
        Console.WriteLine("Data inserted successfully.");
    }
    private static void Read(SqlConnection con)
    {
        string query = "Select * from Students";

        SqlCommand cmd = new SqlCommand(query, con);

        SqlDataReader reader = cmd.ExecuteReader();

        while (reader.Read())
        {
            Console.WriteLine($"Id: {reader["Id"]}, Name: {reader["Name"]}, Age: {reader["Age"]}");
        }

        reader.Close();
    }

    private static void Update(SqlConnection con) {
        string query = "UPDATE Students SET Name = @Name WHERE Id = @Id";

        SqlCommand cmd = new SqlCommand(query, con);

        cmd.Parameters.AddWithValue("@Id", 1);
        cmd.Parameters.AddWithValue("@Name", "Swami Sureshananda");

        cmd.ExecuteNonQuery();
        Console.WriteLine("Data updated successfully.");
    }

    private static void Delete(SqlConnection con) {
        string query = "DELETE FROM Students WHERE Id = @Id";

        SqlCommand cmd = new SqlCommand(query, con);

        cmd.Parameters.AddWithValue("@Id", 3);

        cmd.ExecuteNonQuery();
        Console.WriteLine("Data deleted successfully.");
    }

    static void Main()
    {
        string connectionString = "" +
            "server=ACONITIN\\SQLEXPRESS;" +
            "database=CollegeDB;" +
            "trusted_connection=true;" +
            "trustservercertificate=true;";

        SqlConnection con = new SqlConnection(connectionString);

        con.Open();

        //Create(con);
        Read(con);
        //Update(con);
        //Delete(con);

        con.Close();

    }
}