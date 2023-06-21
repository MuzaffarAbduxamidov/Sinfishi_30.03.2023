#include <stdio.h>

char qabul (char a){
   return a-32;
}
int main(){
   char a;
   scanf(" %c", &a);
   printf("%c", qabul(a));
}
