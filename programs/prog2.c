#include<stdio.h>
void main(){
   int a = 10;
   int *p;
   printf("a の内容：\t\t\t\t%d\n", a);
   printf("a の先頭アドレス(&a)：\t\t\t%08X\n", &a);
   printf("p の内容(場所を確保しただけ)：\t\t%08X\n", p);
   p = &a;
   printf("p の内容(aの所在地 &a をpに代入後)：\t%08X\n", p);
   printf("p が指し示す場所にあるもの(*p)：\t%d\n", *p);
   a++;
   printf("変数aの内容をインクリメントした後の*p：\t%d\n", *p);
   printf("もう一回インクリメントした(++*p)：\t%d\n", ++*p);
   printf("p のサイズ：\t\t\t\t%d バイト\n", sizeof(p));
}
