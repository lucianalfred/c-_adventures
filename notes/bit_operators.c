#include <stdio.h>

int main(void)
{
    unsigned int a = 29;
    unsigned int b = 48;
    int c = 0;

    c = a & b;
    printf("%d & %d = %d\n",a,b,c);

    c = a | b;
    printf("%d | %d = %d\n",a,b,c);
    
    c = a ^ b;
    printf("%d ^ %d = %d\n",a,b,c);

    c = ~a;
    printf("~%d  = %d\n",a,c);
    
    c = a << 2;
    printf("%d << 2 = %d\n",a,c);
    
    c = a >> b;
    printf("%d >> 2 = %d\n",a,c);
    
    
    return (0);

}