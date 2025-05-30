#include <stdio.h>

int print(int i)
{
    printf("print function %d\n", i);
    return i;
}

int main(void)
{
    int a = 20;

    if(a != 20 && print(a))
    {
        printf("I wont't to be printed!\n");
    }

    if(a == 20 && print(a))
    {
        printf("I will be printed!\n");
    }

    int x = 42, y = 42;
    printf("%i\n",(x *= 2, y));

    int k, sumk;
    for(k = 1,sumk = 1; k < 10; k++, sumk += k);

    for(sumk = 1; k < 10; k++, sumk += k)
    {
        printf("\\%5d\\%5d\n",k,sumk);
    }

    return (0);
}