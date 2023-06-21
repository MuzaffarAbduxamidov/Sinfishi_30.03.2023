#include <stdio.h>

void qabul (float son1, float son2, float son3){
   if(son1<son2 && son1<son3){
     printf("%.1f", son1);
   }else if (son2<son1 && son2<son3){
     printf("%.1f", son2);
   }else if (son3<son1 && son3<son2){
     printf("%.1f", son3);
   }
}
int main (){
   float a,b,c;
   scanf("%f%f%f", &a, &b, &c);
   qabul (a,b,c);
}
