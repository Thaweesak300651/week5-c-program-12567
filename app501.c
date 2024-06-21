#include <stdio.h>
int X = 0b1011;
int y = 0x10;
int z = 10;
int main ()
{
    printf("X in Deeimal ;%d\n", X);
    printf("X in Octal ;%o\n", X);
    printf("X Hexadecimal ;%X\n\n", X);

    printf("y in Deeimal ;%d\n", y);
    printf("y in Octal ;%o\n", y);
    printf("y Hexadecimal ;%x\n\n", y); 

    printf("z in Deeimal ;%d\n", z);
    printf("z in Octal ;%o\n", z);
    printf("z Hexadecimal ;%x\n\n", z); 
}