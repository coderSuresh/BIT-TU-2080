<?php
/************************************************************
 PROGRAM TITLE : PHP String Handling with Usage Explanation
 PURPOSE       : To demonstrate string constants, printing
                 strings, and accessing characters in PHP
************************************************************/

/*
============================================================
1. STRING CONSTANTS
============================================================
WHAT:
A string constant is a fixed sequence of characters written
inside single quotes (' ') or double quotes (" ").

USE:
- To store textual data such as messages, names, titles
- To display information to users
- To work with characters and words in programs
*/

// Single-quoted string constant
// USE: Stores literal text (variables are not processed)
$singleString = 'Hello PHP';

// Double-quoted string constant
// USE: Allows variable parsing and escape sequences
$doubleString = "Welcome to PHP Programming";

/*
============================================================
2. PRINTING STRINGS
============================================================
WHAT:
Printing strings means displaying string values on the
screen/output.

USE:
- To show output to users
- To display results
- To debug and verify values during execution

PHP provides:
- echo  → faster, commonly used
- print → returns 1
*/

// Using echo to print a string
// USE: Display output quickly
echo "Using echo to print single-quoted string: ";
echo $singleString;
echo "<br>";

// Using print to print a string
// USE: Display output where return value may be needed
print "Using print to print double-quoted string: ";
print $doubleString;
print "<br><br>";

/*
============================================================
3. ACCESSING CHARACTERS IN STRINGS
============================================================
WHAT:
Each character in a string can be accessed using its index.

RULES:
- Index starts from 0
- Syntax: $string[index]

USE:
- To check individual characters
- To validate input (e.g., first letter, last letter)
- To process characters one by one
*/

// Accessing first character of a string
// USE: Useful for validation or character checking
echo "First character of singleString: ";
echo $singleString[0];    // H
echo "<br>";

// Accessing third character of a string
// USE: Character analysis
echo "Third character of doubleString: ";
echo $doubleString[2];    // l
echo "<br>";

/*
============================================================
ACCESSING LAST CHARACTER OF STRING
============================================================
WHAT:
The last character can be accessed using string length.

USE:
- To check endings of words
- Useful in password and format validation
*/

// Finding length of string
// USE: Required to calculate last index
$length = strlen($singleString);

// Accessing last character
echo "Last character of singleString: ";
echo $singleString[$length - 1];   // P
?>
