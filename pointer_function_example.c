#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}


void pointer_array() {
  int x[5] = {1, 2, 3, 4, 5};
  int* ptr2;

  // ptr is assigned the address of the third element
  ptr2 = &x[0]; 

  printf("*ptr = %d \n", *ptr2);   // 3
  printf("*(ptr+1) = %d \n", *(ptr2+1)); // 4

  int i;
  for (i=0; i<5; i++){
      printf("*ptr = %d \n", *(ptr2+i));   // 3
  }

  printf("*ptr ++ = %d \n", *(ptr2+i)++);   // 3

}

int main()
{
  int* p, i = 10;
  p = &i;
  printf("line 31 *p = %d\n",*p);
  printf("line 32 p = %d\n",p);
  addOne(p);

  printf("line 35 %d\n", *p); // 11

  pointer_array();
  return 0;
}

