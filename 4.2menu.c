#include <stdio.h>

int main (void)
{
	int x, y ,z = 0;
	scanf("%i %i %i", &x, &y, &z);
	
	int opcao = 0;
	scanf("%i", &opcao);
	
	switch (opcao)
	{
		case 1:
			if (x >= y && x >= z)
			{
				printf("%i\n", x); 
			}
			else if (y >= x && y >= z)
			{
				printf("%i\n", y);
			}
			else
			{
				printf("%i\n", z);
			}
			break;
		case 2: 
			if (x <= y && x <= z)
			{
				printf("%i\n", x); 
			}
			else if (y <= x && y <= z)
			{
				printf("%i\n", y);
			}
			else
				{
					printf("%i\n", z);
				}
			break;
				
		case 3: printf("%.2f\n", (float)(x + y + z) / 3);
		break;
		default: printf ("Erro\n");
	
	
	}
	
}	
