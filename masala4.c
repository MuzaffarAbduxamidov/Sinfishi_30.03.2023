#include <stdio.h>

float qabul (void){
   int a=4;
   float b=5.6;
   float c=(float)a+b;
   printf("%.2f", c);
   return a+b;
}
int main(){
   qabul ();
}
