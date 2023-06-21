#include <stdio.h>

void qabul (char a){
   if(a>96 && a<123){
     printf("1");
   }else{
     printf("0");
   }
}
int main (){
   char a;
   scanf("%c", &a);
   qabul (a);
}
