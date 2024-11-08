#include <stdio.h>

int main(void)
{
    int linhas, colunas = 0;
    scanf("%i %i", &linhas, &colunas);

    int matriz[linhas][colunas];
    int maior = matriz[0][0] = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("%i\n", maior);
}
