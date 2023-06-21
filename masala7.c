#include <stdio.h>

void qabul (float a, float b){
   if (a-b==b){
     printf("1");
   }else{
      printf("0");
   }
}
int main () {
   float a;
   printf("Son kiriting:");
   scanf("%f", &a);
   float b;
   printf("Son kiriting:");
   scanf("%f", &b);

   qabul (a,b);
}
