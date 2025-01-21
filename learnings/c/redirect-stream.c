#include <stdio.h>
int main()
{
  // redirect stdin to source file
  freopen(__FILE__, "w", stdout);

  // read each character of source file until EOF
  // char ch;
  // while (scanf("%c", &ch) != EOF)
  // {
  //   printf("%c", ch);
  // }

  printf("Hello, World!\n");

  freopen("CON", "w", stdout);

  printf("Hey Terminal\n");

  return 0;
}

