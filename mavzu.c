//30.03.2023. Payshanba
//Mavzu: "functions" funksiyalar
//function declaration
//  return type + function name + (parametrs) + {} -> function
//Agarda funksiya hech narsa qabul qilmasligini bilsangiz, qavusning ichiga "void" yozib
//qo'yish kerak.
//Bitta funksiyani nomi faqat bir marta yoziladi,aks holda xatolik beradi.

//Funksiyalar dasturlashning Bakend qismining asosiy omillaridan
//void funksiya qiymat qaytarmaydi.

//Funksiyani ichidagi parametrda ochilgan variablening data typelari alohida alohida yoziladi.
//Masalan:   void yoshText(int a, int b)

//funksiya turlari:
//1-Qiymat qaytaradigan funksiya
//2-Qiymat qaytarmaydihan funksiya

//parametr -> funksiya qiymatini qabul qiluvchi
//argument -> funksiyaga qiymat yuboruvchi

//Har bir funksiya alohida yoziladi.

//Qiymat qaytaradigan funksiyalar;
//Qiymat qaytaradigan funksiyalarda "return" har doim bo'lishi kerak.
//"return"da amal bajarsa bo'ladi.
//"return" funksiyada bajarilgan amallarni qaytaradi.





#include <stdio.h>
#include <math.h>

//1-masala
/*void sonbolish (int a, int b){
    float c;
    c=(float)a/b;
    printf("Bo'linganda ->%.1f", c);
}

int main (){
    int son1, son2;
    printf("Son kiriting;");
    scanf("%d%d", &son1, &son2);
    sonbolish(son1, son2);

}*/

//2-masala
/*void modul (int a){
    int b;
    b=abs (a);
    printf("%d", b);
}
int main (){
   int son;
   printf("Son kiriting:");
   scanf("%d", &son);
   modul(son);
}
*/

//3-masala
/*void kichigi(int a,int b, int c, int d, int e){
    if (a<b && a<c && a<d && a<e){
       printf("Kichigi->%d", a);
    }else if (b<a && b<c && b<d && b<e){
       printf("Kichigi->%d", b);
    }else if (c<a && c<b && c<d && c<e){
       printf("Kichigi->%d", c);
    }else if (d<a && d<b && d<c && d<e){
       printf("Kichigi->%d", d);
    }else if (e<a && e<b && e<d && e<c){
       printf("Kichigi->%d", e);
    }
}
int main(){
   int a,b,c,d,e;
   printf("Son kiriting:");
   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

   kichigi(a,b,c,d,e);
}
*/
