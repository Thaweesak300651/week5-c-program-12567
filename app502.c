//ข้อมูลอักขระ
#include <stdio.h>
#include <stdbool.h>
 int x = 65;// Decimal = 10
 int y = 33; // Decimal = 10
 bool isMarry = true;
 bool isMale = false;

 int main()
 {
    printf("x in Deimal :%d\n", x);
    printf("x in Octal :%o\n", x);
    printf("x in Hexadecimal :%x\n", x);
    printf("x in character :%c\n", x);
    printf("x in isMarry in Bool :%d\n\n", isMarry);

    printf("y in Deimal :%d\n", y);
    printf("y in Octal :%o\n", y);
    printf("y in Hexadecimal :%x\n", y);
    printf("y in character :%c\n", y);
    printf("y in isMarry in Bool :%d\n", isMale);

    return (0);
 }