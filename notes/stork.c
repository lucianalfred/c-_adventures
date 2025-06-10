#include <stdio.h>
#include <string.h>

int main(void)
{
   char src[] = "1.2, 3.5, 4.2";
   char *next = NULL;
   char *first = strtok(src, ',');

   do
   {
        char *part;
        char *posn;

        printf("[%s]\n", first);
        part = strtok(first, ".");
        while (part != NULL)
        {
            printf("[%s]\n", part);
            part = strtok(NULL, ".");
        }
   } while (first != NULL);
   
   return (0);
}