#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}


void pointer_array() {
  int x[5] = {1, 2, 3, 4, 5};
  int* ptr2;

  // ptr is assigned the address of the third element
  ptr2 = &x[2]; 

  printf("*ptr = %d \n", *ptr2);   // 3
  printf("*(ptr+1) = %d \n", *(ptr2+1)); // 4
  printf("*(ptr-1) = %d", *(ptr2-1));  // 2

}

int main()
{
  int* p, i = 10;
  p = &i;
  printf("line 11 *p = %d",*p);
  printf("line 12 p = %d",p);
  addOne(p);

  printf("%d", *p); // 11

  pointer_array()
  return 0;
}

