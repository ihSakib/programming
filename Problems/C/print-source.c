#include <stdio.h>
int main(int argc, char const *argv[])
{
    // redirect stdin to source file
    freopen(__FILE__, "r", stdin);

    // read each character of source file until EOF
    char ch;
    while (scanf("%c", &ch) != EOF)
    {
        printf("%c", ch);
    }

    return 0;
}
