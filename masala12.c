#include <stdio.h>

float qabul (float a, float b, float c, float d, float e){
   return (a+b+c+d+e)/5;
}

int main(){
   float a,b,c,d,e;
   scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
   printf("%.2f", qabul(a,b,c,d,e));
}
