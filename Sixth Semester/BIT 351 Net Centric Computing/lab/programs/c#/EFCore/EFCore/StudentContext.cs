using EFCore.Model;
using Microsoft.EntityFrameworkCore;

namespace EFCore
{
    internal class StudentContext: DbContext
    {
        public DbSet<Student> Students { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseSqlServer(
            "Server=ACONITIN\\SQLEXPRESS;" +
            "Database=CollegeDB;" +
            "Trusted_Connection=True;" +
            "TrustServerCertificate=True"
            );
        }
    }
}
