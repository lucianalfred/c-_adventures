#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int val;
    if (argc < 2)
    {
        printf("Usage: %s <integer>\n",argv[0]);
        return 0;
    }

    val = atoi(argv[1]);
    printf("String value = %s, Int value = %d\n", argv[1], val);
    
    return (0);
}