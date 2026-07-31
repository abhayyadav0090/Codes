/*

Escape      Meaning                 ASCII Value (Hex)   Example Usage
Sequence		
\n	        Newline (Line Feed)	    0x0A	            printf("Hello\nWorld"); → prints on two lines
\t	        Horizontal Tab	        0x09	            printf("Hello\tWorld"); → adds tab space
\\	        Backslash	            0x5C	            printf("C:\\Program Files");
\'	        Single Quote	        0x27	            printf("\'Hello\'");
\"	        Double Quote	        0x22	            printf("\"Hello\"");
\b	        Backspace	            0x08	            printf("Hello\bWorld"); → deletes last char before World
\r	        Carriage Return	        0x0D	            printf("Hello\rWorld"); → overwrites line start
\f	        Form Feed (Page Break)	0x0C	            Rarely used in modern terminals
\v      	Vertical Tab	        0x0B	            Moves cursor down to next vertical tab stop
\a	        Alert (Bell)	        0x07	            Produces a beep sound in terminal
\?	        Question Mark	        0x3F	            Avoids trigraph confusion
\0	        Null Character	        0x00	            Marks end of a string

📌 Extended Escape Sequences
Octal values: \ooo (e.g., \141 → 'a')
Hex values:   \xhh (e.g., \x41 → 'A')
These allow representation of arbitrary ASCII/Unicode characters.

Double backslash (\\) is required to print a literal backslash since \ is itself the escape character.
Null character (\0) is crucial in C strings—it terminates them. Forgetting this can cause undefined behavior.
Carriage return (\r) and backspace (\b) may behave differently depending on the terminal or OS.

Escape sequences are compile-time interpreted, meaning the compiler replaces them with their actual character values before execution.
*/

#include <stdio.h>

int main() {
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // Represents a new line
    ch = '\t'; // prints tab space in a statement
    
    printf("First Line\nNew Line\tSpace \"DoubleQuote\" \'SingleQuote\'\n");
    printf("Hello\nWorld\n");       // prints on two lines
    printf("Hello\tWorld\n");      // adds tab space
    printf("C:\\Program Files\n");//
    printf("\'Hello\'\n");       // \' prints ' in statement (string)
    printf("\"Hello\"\n");      // \" prints " in  statement (string)
    printf("Helloo\bWorld\n"); // deletes last char before World
    printf("Hello\rWorld\n"); // overwrites line start
    return 0;
}