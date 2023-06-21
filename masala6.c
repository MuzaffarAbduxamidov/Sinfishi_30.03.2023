#include <stdio.h>

void qabul (int a, int b){
    printf("%d", a%b);
}
int main (){
   int a;
   int b;
   scanf("%d%d", &a, &b);
   qabul (a,b);
}
