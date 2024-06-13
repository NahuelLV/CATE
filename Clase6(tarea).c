//Modificar el programa anterior para calcular promedio entre las notas, posiciones de memoria de las notas menores al promedio, nota maxima y de que alumno es, y porcentaje de aprobados

#include <stdio.h>
#include <stdlib.h>

int main() {
    float notas[5];
    int i;
     int cantidadA;
    printf("Ingresa la cantidad de alumnos:");
    scanf("%d", &cantidadA);
    float notas[cantidadA];
    int aprobados = 0;
    float notaMAX;
    int alumMAX;
    int desaprobados = 0;
    float porcentajeD;
    float sumadenotas;
    for(i = 0; i < 5; i++){
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &notas[i]);
    if(notas[i] > notaMAX || i == 0){
        notaMAX = notas[i];
        alumMAX = i+1;
    }
    sumadenotas += notas[i];
    }
   return 0;
}
