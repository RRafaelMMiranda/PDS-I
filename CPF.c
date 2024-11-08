#include <stdio.h>

int main (void)
{
    //cpf + digitos verificadores
    long long int cpf = 0;
    int dezenaverificador = 0;
    int unidadeverificador = 0;
    //primeiras duas etapas//
    int primeirasoma = 0;
    long int primeirodivisor = 100000000;
    //duas últimas etapas//
    int segundasoma = 0;
    long int segundodivisor = 1000000000;

    scanf("%lld", &cpf);

    long long int cpfvolatil1, cpfvolatil2 = 0;
    cpfvolatil1 = cpf;

    for (int i = 10; i >= 2; i--)
    {
        primeirasoma += ((cpfvolatil1 / primeirodivisor) * i);
        cpfvolatil1 = cpfvolatil1 % primeirodivisor;
        primeirodivisor = primeirodivisor / 10;
    }
    if (primeirasoma % 11 == 0 || primeirasoma % 11 == 1)
    {
        dezenaverificador = 0;
    } else
        {
            dezenaverificador = 11 - (primeirasoma % 11);
        }

   cpfvolatil2 = (cpf * 10) + dezenaverificador;
   /*printf ("%i", dezenaverificador);
   printf ("%li", cpfvolatil2);*/

    for (int j = 11; j >= 2; j--)
    {
        segundasoma += ((cpfvolatil2 / segundodivisor) * j);
        cpfvolatil2 = cpfvolatil2 % segundodivisor;
        segundodivisor = segundodivisor / 10;
    }

    if (segundasoma % 11 == 0 || segundasoma % 11 == 1)
    {
        unidadeverificador = 0;
    } else
        {
            unidadeverificador = 11 - (segundasoma % 11);
        }
    printf ("%i%i", dezenaverificador, unidadeverificador);
    return 0;
}
