#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[] = "abc";
    char b[8];

    strcpy(b, a);
    printf("%s\n", b);

    return (0);
}