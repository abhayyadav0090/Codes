#include<stdio.h>

/*
    constants{
        Numeric Constants{
            Integers{
                decimal {10, +10, -10, 0, 1234567890}
                octal {012, 077, 0123}
                hexadecimal {0x1A, 0XFF, 0x123abc}
            }
            Floating / Real constants{
                12.56, +12.56, -12.56, 12.56e2, 12.56E-2, (not valid -> 12.56e+2, 12.56E+2, $12.56, 12.56e2.5)
            }
        }
        Character Constants{
            Single Character Constants {
                'A', 'b', 'C'
                stored as integer values in memory -> ASCII values -> 'A' = 65, 'B' = 66, 'C' = 67, 'a' = 97, 'b' = 98, 'C' = 67
                A-Z -> 65-90
                a-z -> 97-122
                0-9 -> 48-57
                special characters -> 32-47, 58-64, 91-96, 123-126
                5 != '5' -> 5 is an integer constant, '5' is a character constant
            }
            String Constants {
                "Hello", "World", "ab$", "a", " "
                1 != '1' != "1" -> 1 is an integer constant, '1' is a character constant, "1" is a string constant
                string length = number of characters in string + 1 (for null character)
                stored as array of characters in memory -> "Hello" = {'H', 'e', 'l', 'l', 'o', '\0'}
            }
        }
    }
*/


#define PI 3.14 // preprocessor constant
#define MAX 100 // preprocessor constant
#define A 10 // preprocessor constant

void main() {
    printf("Hello World!\n");
    const int a = 10; // integer constant
    // a =20; // error: assignment of read-only variable 'a'
    printf("Value of a: %d\n", a);
    printf("Value of PI: %f\n", PI);
    printf("Value of MAX: %d\n", MAX);
    printf("Value of A: %d\n", A);
    // return 0;
}