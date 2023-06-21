#include <stdio.h>

float qabul (float t1, float t2, float t3, float t4){
   return t1+t2+t3+t4;
}

int main(){
   float t1,t2,t3,t4;
   scanf("%f%f%f%f", &t1, &t2, &t3, &t4);
   printf("%.2f", qabul(t1,t2,t3,t4));
}
