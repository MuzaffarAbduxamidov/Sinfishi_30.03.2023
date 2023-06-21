#include <stdio.h>

float qabul (float a, float b, float c){
   if (a<b && a<c){
     return a;
   }else if (b<a && b<c){
     return b;
   }else if (c<a && c<b){
     return c;
   }
}
int main (){
   float a,b,c;
   scanf("%f%f%f", &a, &b, &c);
   qabul (a,b,c);
   printf("%f", qabul(a,b,c));
}
