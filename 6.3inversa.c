#include <stdio.h>

int main(void)
{
    int lista[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &lista[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("%i\n", lista[i]);
    }
}
