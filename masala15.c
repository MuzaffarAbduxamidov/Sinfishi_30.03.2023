#include <stdio.h>

int qabul (int a){
   int t=0;
  for(int i=2; i<a; i++){
    if(a%i==0){
      t++;
    }
  }
  if(t>0){
    return 0;
  }else{
    return 1;
  }
}
int main(){
   int a;
   scanf("%d", &a);
   printf("%d", qabul(a));
}
