#include <stdio.h>

int main (void)
{
	int x = 0;
	int mult2 = 0;
	int mult3 = 0;
	int mult5 = 0;
	int multiplo = 0;
	scanf("%i", &x);
	
	while (x != 0)
	{
		if (x % 2 == 0)
		{
			mult2++;
		}
		if (x % 3 == 0)
		{
			mult3++;
		}
		if (x % 5 == 0)
		{
			mult5++;
		}
		if (x % 30 == 0)
		{
			multiplo++;
		}
		x--;
	}
	printf("Múltiplos de 2: %i\n", mult2);
	printf("Múltiplos de 3: %i\n", mult3);
	printf("Múltiplos de 5: %i\n", mult5);
	printf("Múltiplos de todos: %i\n", multiplo);

}
