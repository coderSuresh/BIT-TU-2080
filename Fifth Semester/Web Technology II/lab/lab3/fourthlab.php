<?php
/************************************************************
 PROGRAM TITLE : Regular Expressions in PHP
 PURPOSE       : Demonstrate pattern matching, validation,
                 searching and replacing using regex
************************************************************/

/*============================================================
REGULAR EXPRESSIONS (REGEX)
============================================================
WHAT:
A Regular Expression is a pattern used to match, search,
validate, or replace text in a string.

PHP REGEX FUNCTIONS:
- preg_match()   → check if pattern matches
- preg_match_all() → find all matches
- preg_replace() → replace matching text
- preg_split()   → split string using pattern

DELIMITERS:
- Patterns are written between / /
  Example: /pattern/

USE:
- Validate email, phone number, password
- Search specific words or formats
- Replace unwanted text
- Input validation in forms
*/

/*============================================================
1) BASIC PATTERN MATCHING
============================================================
preg_match(pattern, string)

RETURNS:
- 1 if match found
- 0 if no match
*/

echo "1) BASIC PATTERN MATCHING<br>";

$text = "PHP is powerful";

// Check if word "PHP" exists
$pattern = "/PHP/";

if (preg_match($pattern, $text)) {
    echo "Pattern 'PHP' found in text<br><br>";
} else {
    echo "Pattern not found<br><br>";
}

/*============================================================
2) VALIDATING USER INPUT (EMAIL)
============================================================
PATTERN EXPLANATION:
- ^        : start of string
- [a-zA-Z0-9._%+-]+ : username
- @        : at symbol
- [a-zA-Z0-9.-]+    : domain
- \.       : dot
- [a-zA-Z]{2,} : domain extension
- $        : end of string

USE:
- Form validation
*/

echo "2) EMAIL VALIDATION<br>";

$email = "user123@gmail.com";
$emailPattern = "/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/";

if (preg_match($emailPattern, $email)) {
    echo "Valid email address<br><br>";
} else {
    echo "Invalid email address<br><br>";
}

/*============================================================
3) FINDING ALL MATCHES
============================================================
preg_match_all(pattern, string, matches)

USE:
- Find all occurrences of a word or number
*/

echo "3) FINDING ALL MATCHES<br>";

$sentence = "PHP 8 is faster than PHP 7";
$numberPattern = "/\d+/";   // matches one or more digits

preg_match_all($numberPattern, $sentence, $matches);

echo "Numbers found: ";
print_r($matches[0]);
echo "<br><br>";

/*============================================================
4) REPLACING TEXT USING REGEX
============================================================
preg_replace(pattern, replacement, string)

USE:
- Remove unwanted characters
- Replace sensitive data
*/

echo "4) REPLACING TEXT<br>";

$dirtyText = "My phone number is 98-76-54-32";

// Replace digits with *
$maskedText = preg_replace("/\d/", "*", $dirtyText);

echo "Original: $dirtyText<br>";
echo "Masked: $maskedText<br><br>";

/*============================================================
5) CLEANING STRING USING REGEX
============================================================
USE:
- Remove special characters
- Keep only letters and spaces
*/

echo "5) CLEANING STRING<br>";

$input = "@@ Hello!! PHP### 2026";

// Remove everything except letters and spaces
$cleaned = preg_replace("/[^A-Za-z ]/", "", $input);

echo "Original: $input<br>";
echo "Cleaned: $cleaned<br><br>";

/*============================================================
6) SPLITTING STRING USING REGEX
============================================================
preg_split(pattern, string)

USE:
- Split string using multiple delimiters
*/

echo "6) SPLITTING STRING<br>";

$data = "PHP,Java|Python;C++";

// Split by comma, pipe, or semicolon
$parts = preg_split("/[,|;]/", $data);

print_r($parts);
echo "<br>";

?>
