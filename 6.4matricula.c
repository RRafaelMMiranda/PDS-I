#include <stdio.h>

int main(void)
{
    int aedes, calc = 0;
    scanf("%i", &aedes);
    int listaaedes[aedes];

    for (int i = 0; i < aedes; i++)
    {
        scanf("%i", &listaaedes[i]);
    }
    scanf("%i", &calc);
    int listacalc[calc];

    for (int i = 0; i < calc; i++)
    {
        scanf("%i", &listacalc[i]);
    }

    for (int i = 0; i < aedes; i++)
    {
        for (int j = 0; j < calc; j++)
        {
            if (listaaedes[i] == listacalc[j])
            {
                printf("%i\n", listacalc[j]);
            }
        }
    }

}
