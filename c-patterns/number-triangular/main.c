/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int rows=4;
    for(int i=1;i<=rows;i++){
        
    for(int j=1;j<=rows-i;j++){
        printf(" ");
        
    }
    for(int k=1;k<=i;k++){
        printf("%d ",i);
    }
    printf("\n");
    }
}