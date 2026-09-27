//using System;

//class Program
//{
//    static void Main()
//    {
//        // Creating a jagged array for 3 students
//        int[][] students = new int[3][];

//        // Defining different number of subjects for each student
//        students[0] = new int[] { 85, 90, 78 };          // Student 0: 3 subjects
//        students[1] = new int[] { 92, 88 };              // Student 1: 2 subjects
//        students[2] = new int[] { 70, 75, 80, 95 };      // Student 2: 4 subjects

//        // Displaying all marks
//        Console.WriteLine("--- Student Marks ---");
//        for (int i = 0; i < students.Length; i++)
//        {
//            Console.Write($"Student {i + 1}: ");

//            // Loop through the inner array (subjects for this student)
//            for (int j = 0; j < students[i].Length; j++)
//            {
//                Console.Write(students[i][j] + " ");
//            }
//            Console.WriteLine(); // New line after each student
//        }
//    }
//}