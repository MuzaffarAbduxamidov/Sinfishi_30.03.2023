#include <stdio.h>

void qabul (int a, int b){
   if ((a+b)>10 && (a+b)<20){
     printf("1");
   }else{
     printf("0");
   }
}
int main(){
   int a,b;
   scanf("%d%d", &a, &b);
   qabul(a,b);
}
