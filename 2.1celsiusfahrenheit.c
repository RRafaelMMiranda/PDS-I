#include <stdio.h>

int main(void)
{
		float celsius = 0;
		scanf("%f", &celsius);
		
		float F = (1.8 * celsius + 32);
		printf("%.0f", F);
		return 0;
}
