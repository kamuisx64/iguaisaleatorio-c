#include <stdio.h>
#include "function_numero_aleatorio.c"

int main(){
    int num1 = 0;
    int num2 = 1;
    int counter = 0;

    while (num1 != num2)
    {
        counter++;
        num1 = numero_aleatorio();
        num2 = numero_aleatorio();
    }
    
    if(num1 - num2 == 0){
        printf("o numero igual e: %d\n", num1);
        printf("numero de tentativas: %d\n", counter);
    }else{
        printf("algo deu errado, os numeros nao sao iguais\n");
    }

    printf("Feito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");

    return 0;
}
