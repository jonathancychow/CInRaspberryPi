#include <stdio.h>

/* function definition to swap the values */
void swap(int *x, int *y, int *z) {

   int temp;
   temp = *x;    /* save the value at address x */
   *x = *y;      /* put y into x */
   *y = temp;    /* put temp into y */
   *z = *y + *x;
   return;
}
 
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int sum;
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   /* calling a function to swap the values.
      * &a indicates pointer to a ie. address of variable a and 
      * &b indicates pointer to b ie. address of variable b.
   */
   swap(&a, &b, &sum);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}
