#include <stdio.h>

int main (void)
{
 int a, b, c;
 scanf("%i %i %i", &a, &b, &c);
 
 if (a % b == 0 && a % c ==0)
 {
	 printf("O número é divisível");
	}
	else
		printf("O número não é divisível");
}

