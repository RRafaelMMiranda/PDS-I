#include <stdio.h>

int main(void)
{
    int fib[801];
    fib[0] = 0;
    fib [1] = 1;
    int n = 0;
    scanf("%i", &n);
    
    for (int i = 2; i < 801; i++)
    {
    fib[i] = fib[i- 1] + fib[i - 2];
    }

    do
    {
    printf("%i\n", fib[n]);
    scanf("%i", &n); 
    } while (n > 0);
}
