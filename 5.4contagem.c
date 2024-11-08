#include <stdio.h>

int main (void)
{
	int inicio = 233;	
	printf ("233\n");
	do {
		if (inicio < 300 || inicio > 400)
		{
		inicio += 5;
		printf("%i\n", inicio);
		}
		else {
			inicio += 3;
			printf("%i\n", inicio);	
		}
} while (inicio <= 452);
}
