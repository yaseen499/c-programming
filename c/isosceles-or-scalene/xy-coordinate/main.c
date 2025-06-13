/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=3;
    int y=5;
    if(x>0&&y>0){
        printf("1st quardant");
    }    
    else if (x>0&&y<0){
        printf("4th quadrant");
    }
    else if (x<0&&y<0){
        printf("3rd quadrant");
    }
    else
    {
        printf("2nd quadrant");
    }
    return 0;
}
