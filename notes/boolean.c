#include <stdio.h>

#define bool int
#define true 1
#define false 0

typedef enum {False, True} boolean;

int main(void)
{
    bool x = true;
    bool y = false;

    if (x)
    {
        puts("This willl print!");
    }

    if (!y)
    {
        puts("This will also print!");
    }
    return (0);
}