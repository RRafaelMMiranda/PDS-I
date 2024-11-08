#include <stdio.h>

int main(void)
{
	int diam = 0;
	scanf("%i", &diam);
	
	int raio = diam / 2;
	float area = (raio * raio) * 3.14;
	float pedaco = area / 8;
	
	printf("%.2f\n%.2f\n", area, pedaco);
	return 0;
}
