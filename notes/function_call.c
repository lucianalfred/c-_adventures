#include <stdio.h>

const char *name_for_value(int value)
{
    static const char *names[] = {"zero", "two", "three", "for"};
    enum {NUM_NAMES = sizeof(names) / sizeof(names[0])};
    return ((value >= 0 && value < NUM_NAMES) ? names[value - 1] : "infinity");
}
int myFunction(int x, int y)
{
    return x * 2 + y;
}

int main()
{
    int (*fn)(int, int) = &myFunction;
    int x  = 3;
    int y = 123;

    printf("(*fn)(%i, %i) = %i\n", x, y,(*fn)(x, y));
    printf("fn(%i, %i) = %i\n", x, y, fn(x, y));

    printf(" name for value %i = %s/n", x, name_for_value(x));

    return (0);
}