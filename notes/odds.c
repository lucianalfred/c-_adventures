#include <stdio.h>

int main()
{
    FILE *even, *odds;

    int n = 10;
    size_t k = 0;

    even = fopen("event.txt", "w");
    odds = fopen("odds.txt", "w");

    for(k = 0; k < n + 1; k++)
    {
        k%2==0 ? fprintf(even, "\t%5ld\n", k)
                : fprintf(odds, "\t%5ld\n", k);
    }
    fclose(even);
    fclose(odds);

    return (0);
}