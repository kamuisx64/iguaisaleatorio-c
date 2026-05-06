#include <stdlib.h>
#include <time.h>

int numero_aleatorio()
{
    srand(time(NULL));
    return 1 + rand() % 1000;
}
