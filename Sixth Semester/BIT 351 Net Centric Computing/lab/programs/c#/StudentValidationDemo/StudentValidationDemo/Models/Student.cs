using System.ComponentModel.DataAnnotations;

namespace StudentValidationDemo.Models
{
    public class Student
    {
        public int Id { get; set; }

        [Required(ErrorMessage = "Student name is required.")]
        [StringLength(
            50,
            MinimumLength = 3,
            ErrorMessage = "Name must contain 3 to 50 characters.")]
        public string Name { get; set; } = string.Empty;

        [Required(ErrorMessage = "Email address is required.")]
        [EmailAddress(ErrorMessage = "Enter a valid email address.")]
        public string Email { get; set; } = string.Empty;

        [Range(
            15,
            60,
            ErrorMessage = "Age must be between 15 and 60.")]
        public int Age { get; set; }

        [Required(ErrorMessage = "Course is required.")]
        public string Course { get; set; } = string.Empty;
    }
}

