#include <stdio.h>

void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

int main()
{
  int* p, i = 10;
  p = &i;
  printf("line 11 *p = %d",*p)
  printf("line 12 p = %d",p)
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}