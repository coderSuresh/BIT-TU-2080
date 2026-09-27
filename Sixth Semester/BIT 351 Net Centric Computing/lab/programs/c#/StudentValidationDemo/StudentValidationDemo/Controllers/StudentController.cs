using Microsoft.AspNetCore.Mvc;
using StudentValidationDemo.Models;

namespace StudentValidationDemo.Controllers
{
    [Route("student")]
    public class StudentController : Controller
    {
        // URL Routing and route model binding
        // Example: /student/details/5
        [HttpGet("details/{id:int}")]
        public IActionResult Details(int id)
        {
            return Content($"Student ID received from URL: {id}");
        }

        // Query-string model binding
        // Example: /student/search?course=BCA
        [HttpGet("search")]
        public IActionResult Search(string? course)
        {
            if (string.IsNullOrWhiteSpace(course))
            {
                return Content("No course was entered.");
            }

            return Content($"Course received from query string: {course}");
        }

        // Displays the student form
        // URL: /student/create
        [HttpGet("create")]
        public IActionResult Create()
        {
            return View();
        }

        // Receives form values through model binding
        [HttpPost("create")]
        [ValidateAntiForgeryToken]
        public IActionResult Create(Student student)
        {
            // Model validation
            if (!ModelState.IsValid)
            {
                return View(student);
            }
            return View("Success", student);
        }
    }
}
