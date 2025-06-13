/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int maths, physics, chemistry;
    int total_all, total_mp;

    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);

    total_all = maths + physics + chemistry;
    total_mp = maths + physics;

    printf("Total marks of Maths, Physics, and Chemistry: %d\n", total_all);
    printf("Total marks of Maths and Physics: %d\n", total_mp);

    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total_all >= 190) || total_mp >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

