/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int rows=5;
    for(int i=0;i<=rows;i++){
        
    for(int j=1;j<=rows-i;j++){
        printf(" ");
        
    }
    for(int k=0;k<=i;k++){
        if(k==0 || k==i){
            printf(" *");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
    }
    for(int i=4;i>=0;i--){
        
    for(int j=1;j<=5-i;j++){
        printf(" ");
        
    }
    for(int k=0;k<=i;k++){
        if(k==0 || k==i ){
            printf(" *");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
    }
}
