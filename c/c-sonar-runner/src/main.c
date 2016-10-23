#include <stdio.h>
#include <mylib.h>

/*
 * Compile & run from current folder:
 *   gcc -Wall -pedantic -std=c99 -I../lib -o main main.c && ./main
 */

int main(void) {
  char str[100];
  int x = ADD(40, 2);

  int y = fun(40, 2);
  
  /* Code Smell: Empty block */
  if (x != 42)
  {
  }

  if (x & 0xff) { /* Bug: Bitwise op on signed operand */
    sprintf(str, "40 + 2 = %d\n", x); /* Vulnerability: Don't use sprintf */
    printf("%s", str);
    printf("fun = %d\n", y);
  }
}

int fun(int a, int b) {
  return a * b;
}
