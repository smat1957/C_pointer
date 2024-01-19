#include<stdio.h>

void swap(int *x, int *y){
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

void main(){
   int a = 10;
   int b = 20;
   printf("前：a=%d\tb=%d\n", a,b);
   swap(&a, &b);
   printf("後：a=%d\tb=%d\n", a,b);
}
