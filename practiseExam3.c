# include <stdio.h> 
  
void reverse(char *str) 
{ 
   if (*str) 
   { 
       reverse(str+1); 
       printf("%c", *str); 
   } 
} 
  
void main() 
{ 
   char a[] = "My Name is Mahir"; 
   reverse(a); 
} 