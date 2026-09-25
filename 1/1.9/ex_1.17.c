#include <stdio.h>

#define LIMIT 80

int readline();

int main() {
  int len, total;
  len = total = 0;

  while (len = readline())
    if (len > LIMIT)
      total++;

  printf("Total more then %d: %d\n", LIMIT, total);
  return 0;
}

int readline() {
  int c, len = 0;
  while (((c = getchar()) != EOF) && c != '\n')
    len++;

  return len;
}
