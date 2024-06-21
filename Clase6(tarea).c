//Modificar el programa anterior para calcular promedio entre las notas, posiciones de memoria de las notas menores al promedio, nota maxima y de que alumno es, y porcentaje de aprobados

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int cantidadA;
    printf("Ingresa la cantidad de alumnos:");
    scanf("%d", &cantidadA);
    float notas[cantidadA];
    int aprobados = 0;
    float notaMAX;
    int alumMAX;
    float porcentajeA;
    float sumadenotas;
    for(i = 0; i < cantidadA; i++){
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &notas[i]);
    if(notas[i] > notaMAX || i == 0){
        notaMAX = notas[i];
        alumMAX = i+1;
    }if(notas[i] > 6){
        aprobados += 1;
    }
    sumadenotas += notas[i];
    }
    porcentajeA = (aprobados * 100) /cantidadA;
    printf("El porcentaje de aprobados es de: %.2f\n", porcentajeA);
    printf("El alumno numero %d tuvo la nota mas alta, y fue: %.2f\n", alumMAX, notaMAX);
    
    float promedio = sumadenotas / cantidadA;
    printf("El promedio es: %.2f\n", promedio);
    for(int j = 0; j < cantidadA; j++){
        if(notas[j] < promedio)
        printf("La nota del alumno %d es menor al promedio(%.2f\n)", j+1, promedio);
    }
   return 0;
}
