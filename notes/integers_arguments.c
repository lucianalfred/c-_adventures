#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    if (argc > 2)
    {
        for(i = 1; i < argc; i++)
        {
            printf("%d-%s\n", i, argv[i]);
        }
    }
    if (argc % 4)
    {
        puts("arguents number is not divisible by 4");
    }
    else
    {
        puts("arguments number is divisible by 4");
    }

    
    return (0);
}