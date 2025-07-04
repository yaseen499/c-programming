/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int isPrime(int num){
    int i;
    
    if(num <= 1){
        return 0;
    }
    for(i = 2; i < num; i++){
        if(num % i == 0){
        return 0;
        }
    }
    return 1;
}    
int main()
{
    int n;
    printf("Enter one number: \n");
    scanf("%d",&n);
    
    if(isPrime(n)){
        printf("%d Is prime", n);
    } else {
        printf("%d Not prime", n);
    }
    return 0;
}