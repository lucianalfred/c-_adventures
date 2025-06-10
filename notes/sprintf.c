#include <stdio.h>

int main()
{
    char buffer[50];
    double PI = 3.1415926;
    sprintf(buffer, "PI = %.7f", PI);
    printf("%s\n", buffer);
    return (0);
}