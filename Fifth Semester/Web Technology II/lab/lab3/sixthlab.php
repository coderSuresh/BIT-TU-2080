<?php
/************************************************************
 PROGRAM TITLE : Advanced Array Operations in PHP
 TOPICS COVERED:
 1) Extracting Multiple Values
 2) Conversion between Array and Variables
 3) Traversing Arrays
 PURPOSE:
 - Demonstrate practical array handling techniques
 - Explain WHAT + SYNTAX + USE inside comments
************************************************************/

/*============================================================
1) EXTRACTING MULTIPLE VALUES FROM ARRAYS
============================================================
WHAT:
Extracting multiple values means assigning array elements
to separate variables in a single operation.

METHODS:
A) list() function (indexed arrays)
B) extract() function (associative arrays)

USE:
- Assign values quickly to variables
- Useful when handling function returns or records
*/

/*---------- A) Using list() with Indexed Array ----------*/

// Indexed array
$colors = ["Red", "Green", "Blue"];

// list() assigns array values to variables in order
list($color1, $color2, $color3) = $colors;

echo "1) EXTRACTING MULTIPLE VALUES<br>";
echo "Using list():<br>";
echo "Color 1: $color1<br>";
echo "Color 2: $color2<br>";
echo "Color 3: $color3<br><br>";

/*---------- B) Using extract() with Associative Array ----------*/

// Associative array
$user = [
    "username" => "anisha",
    "email" => "anisha@gmail.com",
    "role" => "admin"
];

// extract() converts array keys into variables
extract($user);

echo "Using extract():<br>";
echo "Username: $username<br>";
echo "Email: $email<br>";
echo "Role: $role<br><br>";

/*
NOTE:
- extract() should be used carefully
- It may overwrite existing variables
*/

/*============================================================
2) CONVERSION BETWEEN ARRAY AND VARIABLES
============================================================
WHAT:
Conversion means changing arrays to variables or variables
to arrays.

METHODS:
A) compact() → variables to array
B) extract() → array to variables

USE:
- Pass multiple variables to functions
- Handle grouped data efficiently
*/

// Variables
$name = "Sahil";
$age = 22;
$course = "BIT";

// compact() creates array from variables
$studentArray = compact("name", "age", "course");

echo "2) CONVERSION BETWEEN ARRAY AND VARIABLES<br>";
echo "Using compact() (Variables → Array):<br>";
print_r($studentArray);
echo "<br>";

// extract() converts array back to variables
extract($studentArray);

echo "Using extract() (Array → Variables):<br>";
echo "Name: $name, Age: $age, Course: $course<br><br>";

/*============================================================
3) TRAVERSING ARRAYS
============================================================
WHAT:
Traversing means accessing each element of an array
one by one.

COMMON METHODS:
- for loop         → indexed arrays
- foreach loop     → indexed & associative arrays
- while + each()   → older method (deprecated)

USE:
- Display array data
- Process each element (sum, search, format)
*/

/*---------- A) Traversing Indexed Array using for ----------*/

$marks = [80, 75, 90, 88];

echo "3) TRAVERSING ARRAYS<br>";
echo "Using for loop (Indexed Array):<br>";

for ($i = 0; $i < count($marks); $i++) {
    echo "Mark " . ($i + 1) . ": " . $marks[$i] . "<br>";
}

echo "<br>";

/*---------- B) Traversing Indexed Array using foreach ----------*/

echo "Using foreach (Indexed Array):<br>";
foreach ($marks as $mark) {
    echo "Mark: $mark<br>";
}

echo "<br>";

/*---------- C) Traversing Associative Array using foreach ----------*/

$employee = [
    "id" => 101,
    "name" => "Bipana",
    "department" => "IT"
];

echo "Using foreach (Associative Array):<br>";
foreach ($employee as $key => $value) {
    echo "$key : $value<br>";
}

?>
