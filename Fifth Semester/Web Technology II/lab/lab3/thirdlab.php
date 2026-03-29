<?php
/************************************************************
 PROGRAM TITLE : Comparing, Manipulating and Searching Strings
 PURPOSE       : Demonstrate string comparison, manipulation,
                 and searching in ONE program with comments.
************************************************************/

/*============================================================
1) COMPARING STRINGS
============================================================
WHAT:
String comparison checks whether two strings are equal,
not equal, or which comes first (lexicographic order).

SYNTAX / FUNCTIONS:
- ==   : compares values (type juggling may happen)
- ===  : compares value + type (strict)
- strcmp($a, $b)       : case-sensitive compare
- strcasecmp($a, $b)   : case-insensitive compare

USE:
- Login checks (username/password)
- Sorting names/words
- Validating user input matches expected value
*/

echo "1) COMPARING STRINGS<br>";

$a = "Hello";
$b = "hello";
$c = "Hello";

// == compares values (case matters in strings)
echo "Using == (\"$a\" == \"$c\"): " . (($a == $c) ? "TRUE" : "FALSE") . "<br>";

// strcmp: returns 0 if equal, <0 if a<b, >0 if a>b
echo "strcmp(\"$a\", \"$b\"): " . strcmp($a, $b) . " (case-sensitive)<br>";

// strcasecmp: ignores case
echo "strcasecmp(\"$a\", \"$b\"): " . strcasecmp($a, $b) . " (case-insensitive)<br><br>";

/*============================================================
2) MANIPULATING STRINGS
============================================================
WHAT:
String manipulation means changing or modifying string content.

COMMON FUNCTIONS:
- strlen($s)                 : length
- strtolower($s), strtoupper($s) : case change
- ucfirst($s), ucwords($s)    : capitalize
- trim($s)                    : remove extra spaces
- substr($s, start, length)   : extract part
- str_replace(find, replace, s): replace text
- strrev($s)                  : reverse
- implode($glue, $arr)        : join array into string
- explode($delimiter, $s)     : split string into array

USE:
- Format names, emails, titles
- Create usernames, extract codes
- Modify text before saving or displaying
*/

echo "2) MANIPULATING STRINGS<br>";

$text = "   php is fun and powerful   ";

// trim: remove spaces from start/end
$trimmed = trim($text);

// strtoupper: convert to uppercase
$upper = strtoupper($trimmed);

// ucwords: capitalize each word
$titleCase = ucwords($trimmed);

// substr: extract part of string
$part = substr($trimmed, 0, 3); // "php"

// str_replace: replace word
$replaced = str_replace("powerful", "awesome", $trimmed);

// strrev: reverse string
$reversed = strrev($trimmed);

echo "Original: [" . htmlspecialchars($text) . "]<br>";
echo "After trim(): [$trimmed]<br>";
echo "Uppercase: $upper<br>";
echo "Title Case: $titleCase<br>";
echo "First 3 chars (substr): $part<br>";
echo "After replace: $replaced<br>";
echo "Reversed: $reversed<br><br>";

/*============================================================
3) SEARCHING STRINGS
============================================================
WHAT:
Searching means finding the position of a character/word
or checking if something exists inside a string.

COMMON FUNCTIONS:
- strpos($s, $find)     : position (case-sensitive)
- stripos($s, $find)    : position (case-insensitive)
- str_contains($s,$find): TRUE/FALSE (PHP 8+)
- substr_count($s,$find): count occurrences

IMPORTANT NOTE:
- strpos returns 0 if found at the start, so use !== false

USE:
- Validate if email contains "@"
- Check if sentence contains a keyword
- Count how many times a word appears
*/

echo "3) SEARCHING STRINGS<br>";

$sentence = "PHP is easy. PHP is widely used.";

// Find first occurrence position of "PHP"
$pos1 = strpos($sentence, "PHP"); // 0 (found at start)
echo "strpos(sentence, \"PHP\"): $pos1<br>";

// Correct way to check found/not found
if (strpos($sentence, "easy") !== false) {
    echo "\"easy\" found in sentence<br>";
} else {
    echo "\"easy\" NOT found in sentence<br>";
}

// Case-insensitive search
$pos2 = stripos($sentence, "php");
echo "stripos(sentence, \"php\"): $pos2 (case-insensitive)<br>";

// Count occurrences
$countPHP = substr_count($sentence, "PHP");
echo "substr_count(sentence, \"PHP\"): $countPHP<br>";

?>
