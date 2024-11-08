#include <stdio.h>

int main (void)
{
 int a, b = 0;
 
 scanf("%i %i", &a, &b);
 printf("AND: %i ", a&b);
 printf("OR: %i ", a|b);
 printf("XOR: %i\n", a^b);

return 0;
}
