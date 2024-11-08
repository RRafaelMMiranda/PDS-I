#include <stdio.h>

int main(void)
{
    int linhas, colunas = 0;
    scanf("%i %i", &linhas, &colunas);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
        for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%i ", -matriz[i][j]);
        }
        printf("\n");
    }
}
