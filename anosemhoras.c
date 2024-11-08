#include <stdio.h>

int main(void)
{
	long int anos = 0;
	scanf("%li", &anos);
	
	long int horas = anos * 365 * 24;
	printf("%li", horas);
	
}
