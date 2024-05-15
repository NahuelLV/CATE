//Realizar un progama para identificar si un numero es negativo, positivo o 0

#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero;
    printf("Ingrese su numero: ");
    scanf("%d", &numero);
    if(numero > 0){
        printf("El numero es positivo");
    }else if(numero < 0){
        printf("El numero es negativo");
    }else if(numero == 0){
        printf("El numero es 0");
    }
    return 0;
}
