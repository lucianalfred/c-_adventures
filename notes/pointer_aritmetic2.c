#include <stdio.h>
#include <stdlib.h>

int main()
{
    arr[] = {1, 2, 3, 4, 5};
    int *p = &arr[2];
    int *q = &arr[3];
    ptrdiff_t diff = q - p;

    printf("q - p= %ti \n", *( p + diff)); /* Outputs*/
}