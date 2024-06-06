//Almacenar en un vector 5 notas en donde la posicion de memoria corresponde al numero de alumnos, numero de alumnos aprobados, porcentaje de desaprobados, notas menores menores al promedio y alumno que obtuvo la nota mas alta

#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidadA;
    printf("Ingresa la cantidad de alumnos:");
    scanf("%d", &cantidadA);
    float notas[cantidadA];
    int aprobados = 0;
    float notaMAX;
    int alumMAX;
    int desaprobados = 0;
    float porcentajeD;
    for(int i = 0; i < cantidadA; i++){
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &notas[i]);
    if(notas[i] >= 6){
        aprobados += 1;
    }
    if(notas[i] < 6){
        desaprobados += 1;
    }
    if(notas[i] > notas[i-1] || i == 0){
        notaMAX = notas[i];
        alumMAX = i+1;
    }
    }
    printf("La cantidad de alumnos aprobados es de: %.d\n", aprobados);
    porcentajeD = (desaprobados * 100) /cantidadA;
    printf("El porcentaje de desaprobados es de: %.2f\n", porcentajeD);
    return 0;
}
