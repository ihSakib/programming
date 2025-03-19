#include <stdio.h>

int main()
{
  int a, b;
  int c;

  scanf("%d %d", &a, &b);
  c = a % b == 0 || b % a == 0;

  if (c)
  {
    printf("Sao Multiplos\n");
  }
  else
  {
    printf("Nao sao Multiplos\n");
  }

  return 0;
}