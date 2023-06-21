#include <stdio.h>

void qabul (int a, int b, int c){
   if(a!=b && a!=c && c!=b){
     printf("1");
   }else if (b!=a && b!=c && c!=a){
     printf("1");
   }else if (c!=a && c!=b && b!=a){
     printf("1");
   }else
     printf("0");
}
int main (){
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    qabul (a,b,c);
}
