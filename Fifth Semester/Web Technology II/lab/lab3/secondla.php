<?php
/************************************************************
 PROGRAM TITLE : PHP String Safety Handling
 TOPICS COVERED:
 1. Cleaning Strings
 2. Encoding
 3. Escaping
 PURPOSE:
 - To clean user input
 - To encode data safely
 - To escape special characters
************************************************************/

/*============================================================
1. CLEANING STRINGS
============================================================
WHAT:
Cleaning strings means removing unwanted spaces, symbols,
or characters from a string.

WHY / USE:
- To clean user input from forms
- To standardize data before storing in database
- To remove junk characters and extra spaces

COMMON FUNCTIONS:
- trim()        → removes spaces from both ends
- ltrim()       → removes spaces from left
- rtrim()       → removes spaces from right
- preg_replace()→ remove unwanted patterns
- filter_var()  → sanitize input
*/

// Raw input containing spaces and special characters
$rawInput = "   @@ Hello   PHP!!   \n";

// Remove spaces from beginning and end
$trimmed = trim($rawInput);

// Replace multiple spaces with single space
$singleSpace = preg_replace('/\s+/', ' ', $trimmed);

// Remove special characters (keep letters and spaces only)
$cleanString = preg_replace('/[^A-Za-z ]/', '', $singleSpace);

// Display cleaned results
echo "CLEANING STRINGS<br>";
echo "Raw Input: " . htmlspecialchars($rawInput) . "<br>";
echo "After trim(): " . htmlspecialchars($trimmed) . "<br>";
echo "After removing extra spaces: " . htmlspecialchars($singleSpace) . "<br>";
echo "Final Clean String: " . htmlspecialchars($cleanString) . "<br><br>";

/*============================================================
2. ENCODING
============================================================
WHAT:
Encoding converts data into another format so it can be
safely transmitted, stored, or displayed.

WHY / USE:
- To safely send data via URL
- To prevent HTML from being executed
- To transfer data between systems

COMMON TYPES:
- URL Encoding        → urlencode()
- HTML Encoding       → htmlspecialchars()
- Base64 Encoding     → base64_encode()
*/

// URL Encoding
$searchText = "php & string encoding";
$urlEncoded = urlencode($searchText);

// HTML Encoding (prevents HTML execution)
$htmlText = "<b>PHP</b> & <script>alert('Hi')</script>";
$htmlEncoded = htmlspecialchars($htmlText, ENT_QUOTES, 'UTF-8');

// Base64 Encoding
$data = "Password@123";
$base64Encoded = base64_encode($data);
$base64Decoded = base64_decode($base64Encoded);

// Display encoding results
echo "ENCODING<br>";
echo "Original Text: $searchText<br>";
echo "URL Encoded: $urlEncoded<br>";
echo "HTML Encoded: $htmlEncoded<br>";
echo "Base64 Encoded: $base64Encoded<br>";
echo "Base64 Decoded: $base64Decoded<br><br>";

/*============================================================
3. ESCAPING
============================================================
WHAT:
Escaping means adding special characters so that symbols
like quotes or HTML tags are treated as text, not code.

WHY / USE:
- To avoid syntax errors in strings
- To prevent XSS (cross-site scripting)
- To safely display user input

COMMON METHODS:
- Backslash (\") for quotes
- htmlspecialchars() for HTML output
*/

// Escaping quotes inside a string
$quoteString = "He said, \"PHP is powerful!\"";

// User input containing HTML and quotes
$userInput = "<h1>Hello</h1> 'PHP' \"JS\"";

// Escaping HTML characters
$safeOutput = htmlspecialchars($userInput, ENT_QUOTES, 'UTF-8');

// Display escaping results
echo "ESCAPING<br>";
echo $quoteString . "<br>";
echo "Safe Output: " . $safeOutput . "<br>";

?>
