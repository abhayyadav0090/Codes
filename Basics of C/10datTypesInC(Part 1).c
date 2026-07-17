/*
Abhay yadav
Revising C
Primary (Primitive / Fundamental / Built-in) DataTypes in C
17/07/2026
*/

/*
int a =12;
long b = 123456;
char c = 'a';
It tells how much storage/memory to be allocated to a variable
DataTypes{
    Primary{
        int, float, char, double, void;
    }
    Derived{
        Array, Structure, Union, Pointers;
    }
    User-defined{
        typedef
        Enumerated DT

        typedef int Abhay;
        int a; -> Abhay a;
    }
}

Size Modifier/Qualifier --> {short, long, signed, unsigned} -> we can modify range of values it can store

int{short int, long int, signed int, unsigned int} {
signed-> -32768 to 32767 including 0
unsigned-> 0 to 65535
}

char (1 byte){
signed int, unsigned int
signed-> -128 to 127 including 0
unsigned-> 0 to 255
}

float (4 bytes){
range-> -3.4e38 to +3.4e38}

void{generally used for declaring function as it can't store constant values}
*/

/*
Format Specifier    Data Type           Purpose / Representation
%d or %i            int                 Signed decimal integer
%u                  unsigned int        Unsigned decimal integer
%f                  float               Decimal floating-point number (default 6 decimal places)
%lf                 double              Higher-precision floating-point number
%c                  char                A single character
%s                  char[] (String)     A sequence of characters
%p                  Pointer             Memory address in hexadecimal
%x / %X             int                 Unsigned hexadecimal integer (lowercase / uppercase)
%o                  int                 Octal (base 8) representation
%e / %E             float / double      Scientific notation (exponential form)
%%                  None                Prints a literal % character
*/

#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main() {
    printf("Hello\n");
    printf("Size of short int : %lu\n", sizeof(short int));
    printf("Size of unsigned short int : %lu\n", sizeof(unsigned short int));
    printf("Size of int : %lu\n", sizeof(int));
    printf("Size of long int : %lu\n", sizeof(long int));
    printf("Size of signed int : %lu\n", sizeof(signed int));
    printf("Size of unsigned int : %lu\n", sizeof(unsigned int));
    printf("Size of unsigned long int : %lu\n", sizeof(unsigned long int));
    printf("Size of long long : %lu\n", sizeof(long long));
    printf("Size of long long int : %lu\n", sizeof(long long int));
    printf("Size of char : %lu\n", sizeof(char));
    printf("Size of signed char : %lu\n", sizeof(signed char));
    printf("Size of unsigned char : %lu\n", sizeof(unsigned char));
    printf("Size of float : %lu\n", sizeof(float));
    printf("Size of double : %lu\n", sizeof(double));
    printf("Size of long double : %lu\n", sizeof(long double));

    long long  a;
    printf("size of a : %lu\n", sizeof(a));

    printf("98 in char : %c\n", 98); // b

    // Printing all Characters by ASCII values
    // for(int i=-128; i<128; i++){
    //     printf("%c ", i);
    // }

    printf("%d\n" ,'`'); // 96
    return 0;
}