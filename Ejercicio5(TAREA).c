//Realizar un programa para calcular, leyendo 5 notas, el promedio, procentaje de notas aprobadas, promedio de las desaprobadas y cuantas notas fueron mayores o iguales a 8 

#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    float notaT = 0;
    float notaD = 0;
    int porcentaje = 0;
    float promedio = 0;
    float promedioD = 0;
    int cont = 0, acum = 0;
    
    for(int i = 0; i < 5; i++){
    printf("Ingrese su nota: ");
    scanf("%f", &nota);
    notaT = notaT + nota;
    if(nota >= 6){
        acum += 1;
    }
    if(nota >= 8){
        cont += 1;
    }
    if(nota < 6){
        notaD = notaD + nota;
    }
    }
    promedio = notaT / 5;
    printf("Su promedio es: %.2f\n", promedio);
    porcentaje = (acum * 100) /5;
    printf("Su porcentaje de notas aprobadas es de: %d\n", porcentaje);
    printf("Se saco %d nota/s con mas o igual que un 8\n", cont);
    promedioD = notaD / 5;
    printf("Su promedio(en notas desaprobadas) es: %.2f\n", promedioD);
    return 0;
}
