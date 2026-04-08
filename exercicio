#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n1, n2, tentativas;

    tentativas = 0;
    srand(time(NULL));

    do
    {
        n1 = 1 + rand() % 1000;
        n2 = 1 + rand() % 1000;
        tentativas++;
    } while (n1 != n2);

    printf("Após %d tentativas, os dois números gerados são iguais a %d\n", tentativas, n1);

    printf("Made by Davi Sales");
}
