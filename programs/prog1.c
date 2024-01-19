#include<stdio.h>
void main(){
   int a = 10;
   int b;
   printf("a の内容：\t\t%08X(%d)\n", a, a);
   printf("b の内容：\t\t%08X(%d)\n", b, b);
   printf("a の先頭アドレス(&a)：\t%08X\n", &a);
   printf("b の先頭アドレス(&b)：\t%08X\n", &b);
   printf("a のサイズ：\t\t%d バイト\n", sizeof(a));
}
