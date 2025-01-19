#include <stdio.h>

int main()
{
    int n[] = {69, 105, 100, 32, 77, 117, 98, 97, 114, 97, 107};
    int size = sizeof(n) / sizeof(int);

    for (size_t i = 0; i < size; i++)
    {
        printf("%c", n[i]);
    }
    
    printf("\n");

    return 0;
}
