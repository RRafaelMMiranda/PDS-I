#include <stdio.h>

int main (void)
{
	int soma = 0;
	int n = 0;
	scanf("%i", &n);
	
	for (int i = 0; i <= n; i++)
	{
		soma += i;
	}
	printf("%i", soma);
}
