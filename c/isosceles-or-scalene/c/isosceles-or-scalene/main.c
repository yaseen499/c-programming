/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int side1=15;
    int side2=20;
    int side3=2;

    if(side1==side2&&side2==side3) {
        printf("the triangle is equilateral");
    }

    else if (side1==side2&&side2==side3!=side2&&side3!=side1) {
        printf("The triangle is Isosceles");
    }
    else
    {
        printf("The triangle is scalene");
    }

    return 0;
}

