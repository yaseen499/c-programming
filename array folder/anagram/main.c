/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
   char str1[100]="silent";
   char str2
   
   int len=strlen(str);
   printf("%d",len);
   
   for(int i=0;i<len;i++){
       for(int j=i;j<len;j++){
          if(str[i]>str[j]){
              char temp=str[i];
              str[i]=str[j];
              str[j]=temp;
          }
       }
   }
   printf("%s",str);
    return 0;
}