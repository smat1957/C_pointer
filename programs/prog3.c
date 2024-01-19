#include<stdio.h>
void main(){
   int a = 10;
   int *p, **q;
   printf("a の内容：%d\n", a);
   printf("a の先頭アドレス(&a)：%08X\n", &a);
   p = &a;
   printf("p=&a によって *p は：%d\n", *p);
   q = &p;
   printf("q=&p によって **q は：%d\n", **q);
   printf("++**q は：%d\n", ++**q);
   printf("更に、++**&p は：%d\n", ++**&p);
}
