//Realizar un programa que lea la nota de 5 alumnos y las almacene en un vector, imprimir el vector con sus posiciones de memoria

#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5];
    int i;
    for(i = 0; i < 5; i++){
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &notas[i]);
    }
   for(i = 0; i < 5; i++){
       printf("\n");
       printf("La nota del alumno %d fue: %.2f", i+1, notas[i]);
       printf("\n");
   }
   return 0;
}
