#include <stdio.h>

int main(void) 
{
	int a,b = 0;
	scanf ("%i %i", &a, &b);	
	for (int i = a; i < b; i++)
	{
		int primo = 1;
		for (int i = 2; i < a; i++)
		{
			
			if (a % i == 0)
			{
				primo = 0;
			}
		}

		 if (primo == 1 && a != 1)
		{
			printf("%i\n", a);
		}
		a++;
	}
	
	return 0;
}
