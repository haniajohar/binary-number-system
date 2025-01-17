# Binary and Decimal Conversion Program

This program provides functionality to convert numbers between binary and decimal systems.

## Features
<ul>
  <li>Binary to Decimal Conversion</li>
  <li>Decimal to Binary Conversion</li>
</ul>

## How It Works
<p>The program uses two main functions:</p>
<ol>
  <li><b>BinToDec(int num):</b> Converts a binary number to its decimal equivalent. Validates if the input is a binary number (contains only 0s and 1s).</li>
  <li><b>decToBin(int num):</b> Converts a decimal number to its binary equivalent.</li>
</ol>

## Usage
<p>To use the program:</p>
<ol>
  <li>Compile the code using a C++ compiler.</li>
  <li>Run the program and follow the on-screen prompts.</li>
</ol>

### Example Input/Output
<p><b>Example 1: Decimal to Binary</b></p>
<pre>
Enter a number:
10
Which type of conversion do you want?
Press 1 for Decimal to Binary conversion
Press 2 for Binary to Decimal conversion
1
</pre>
<p><b>Output:</b> Binary: 1010</p>

<p><b>Example 2: Binary to Decimal</b></p>
<pre>
Enter a number:
1010
Which type of conversion do you want?
Press 1 for Decimal to Binary conversion
Press 2 for Binary to Decimal conversion
2
</pre>
<p><b>Output:</b> Decimal: 10</p>

<p><b>Example 3: Invalid Binary Input</b></p>
<pre>
Enter a number:
1021
Which type of conversion do you want?
Press 1 for Decimal to Binary conversion
Press 2 for Binary to Decimal conversion
2
</pre>
<p><b>Output:</b> It is not a binary number</p>

## Requirements
<ul>
  <li>A C++ compiler such as GCC, Clang, or MSVC</li>
  <li>An operating system with a compatible compiler</li>
</ul>

## Limitations
<ul>
  <li>Does not handle negative numbers</li>
  <li>Only works for integers</li>
  <li>Binary input must consist of only 0s and 1s</li>
</ul>

## License
<p>This program is provided for educational purposes. Feel free to modify and share it.</p>

## Author
<p>Created by [Your Name]</p>
