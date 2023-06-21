#include <stdio.h>

void qabul (char a){
   a++;
   printf("%c", a);
}

int main(){
   char a;
   scanf("%c", &a);
   qabul (a);
}
