#include <stdio.h>

int main (void)
{
	int dinheiro = 0;
	int resto = 0;

	scanf("%i", &dinheiro);
	
	resto = dinheiro % 100;
	printf("100: %i\n", dinheiro / 100);
	
	printf("50: %i\n", resto / 50);
	resto = resto % 50;
	
	printf("20: %i\n", resto / 20);
	resto = resto % 20;
	
	printf("10: %i\n", resto / 10);
	resto = resto % 10;
	
	printf("5: %i\n", resto / 5);
	resto = resto % 5;
	
	printf("2: %i\n", resto / 2);
	resto = resto % 2;
	
	printf("1: %i\n", resto / 1);
	resto = resto % 1;
	
}
	
	
