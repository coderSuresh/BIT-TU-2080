<?php
/************************************************************
 PROGRAM TITLE : PHP Arrays (Complete Demo with Comments)
 TOPICS COVERED:
 1) Array (Introduction)
 2) Indexed vs Associative Arrays
 3) Defining Array
 4) Storing Data in Array
 5) Multidimensional Array
 PURPOSE:
 - Show all array types and operations in ONE program
 - Explain WHAT + SYNTAX + USE inside comments
************************************************************/

/*============================================================
1) ARRAY (INTRODUCTION)
============================================================
WHAT:
An array is a variable that can store multiple values
under a single name.

SYNTAX:
$arr = [value1, value2, value3];

USE:
- Store lists: students, marks, products, prices
- Manage multiple values efficiently
*/

/*============================================================
2) INDEXED vs ASSOCIATIVE ARRAYS
============================================================
INDEXED ARRAY:
- Uses numeric indexes (0,1,2,...)
- Good for ordered lists

ASSOCIATIVE ARRAY:
- Uses named keys ("name" => "Sahil")
- Good for key-value data (like records)
*/

/*============================================================
3) DEFINING ARRAYS
============================================================
Two common ways:
A) Using [] (recommended)
B) Using array() (old style)
*/

// A) Defining an indexed array using []
$fruits = ["Apple", "Banana", "Mango"];

// B) Defining an indexed array using array()
$numbers = array(10, 20, 30);

// Defining an associative array
$student = [
    "id" => 101,
    "name" => "Anisha",
    "course" => "BIT"
];

echo "3) DEFINING ARRAYS<br>";
echo "Indexed Array (fruits): ";
print_r($fruits);
echo "<br>";

echo "Indexed Array (numbers): ";
print_r($numbers);
echo "<br>";

echo "Associative Array (student): ";
print_r($student);
echo "<br><br>";

/*============================================================
4) STORING DATA IN ARRAY
============================================================
WHAT:
Storing data means inserting or updating values in arrays.

SYNTAX:
- Indexed array add: $arr[] = value;
- Indexed array update: $arr[index] = value;
- Associative add/update: $arr[key] = value;

USE:
- Add new items (shopping cart, new students)
- Update existing records (marks, names)
*/

// Add a new fruit at the end
$fruits[] = "Orange";

// Update an indexed array value
$fruits[1] = "Grapes"; // Banana replaced with Grapes

// Add new key-value pair in associative array
$student["email"] = "anisha@gmail.com";

// Update associative array value
$student["course"] = "BCA";

echo "4) STORING DATA IN ARRAYS<br>";
echo "Updated fruits array: ";
print_r($fruits);
echo "<br>";

echo "Updated student array: ";
print_r($student);
echo "<br><br>";

/*============================================================
5) MULTIDIMENSIONAL ARRAY
============================================================
WHAT:
A multidimensional array is an array containing other arrays.

TYPES:
A) 2D Indexed (table-like)
B) Mixed (associative inside indexed)

USE:
- Store table data (students with marks)
- Store rows and columns (like database results)
*/

// A) 2D Indexed array (rows and columns)
$matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

// B) Multidimensional array with student records
$students = [
    [
        "id" => 1,
        "name" => "Sahil",
        "marks" => [80, 75, 90] // another array inside
    ],
    [
        "id" => 2,
        "name" => "Bipana",
        "marks" => [88, 92, 79]
    ]
];

echo "5) MULTIDIMENSIONAL ARRAYS<br>";
echo "Matrix (2D Indexed Array):<br>";
print_r($matrix);
echo "<br><br>";

echo "Students (Multidimensional Mixed Array):<br>";
print_r($students);
echo "<br><br>";

/*============================================================
ACCESSING MULTIDIMENSIONAL DATA (EXTRA PRACTICAL)
============================================================
SYNTAX:
- $matrix[row][col]
- $students[index]["key"]
- $students[index]["marks"][markIndex]

USE:
- Retrieve specific element from table/records
*/

echo "ACCESSING MULTIDIMENSIONAL DATA<br>";
echo "Matrix[1][2] (row 2, col 3): " . $matrix[1][2] . "<br>"; // 6
echo "Student 1 name: " . $students[0]["name"] . "<br>";      // Sahil
echo "Student 2 second mark: " . $students[1]["marks"][1] . "<br>"; // 92

?>
