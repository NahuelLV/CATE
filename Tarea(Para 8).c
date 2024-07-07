/*Tarea: Cargar en una matriz cargar las notas de 3 alumnos en 3 materias. Mostrar
el promedio de cada alumno, promedio por materia, porcentaje de notas aprobadas
diagonal principal y nota maxima con su estudiante y en que materia.
*/

#include <stdio.h>
#include <stdlib.h>

#define alumnos 3
#define materias 3

int main() {
    float notas[alumnos][materias];
    float sumaAlumnos[alumnos] = {0};
    float sumaMaterias[materias] = {0};
    int notasAprobadas = 0;
    float notaMaxima = 0;
    int alumnoMax, materiaMax;

        for (int i = 0; i < alumnos; i++) {
        printf("Ingrese las notas del alumno(0 a 10) %d:\n", i + 1);
        for (int j = 0; j < materias; j++) {
            printf("  Nota en materia %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            if(notas[i][j] >= 0 && notas[i][j] <= 10){
                sumaAlumnos[i] += notas[i][j];
                sumaMaterias[j] += notas[i][j];
                
                if (notas[i][j] >= 6.0) {
                    notasAprobadas++;
                }
                
                if (notas[i][j] > notaMaxima) {
                    notaMaxima = notas[i][j];
                    alumnoMax = i;
                    materiaMax = j;
                }
            } else {
                printf("Reinicie el programa y lea bien (La nota es de 0 a 10)\n");
                return 1; 
            }
        }
    }
    printf("\n");
    printf("Promedio de cada alumno:\n");
    for (int i = 0; i < alumnos; i++) {
        printf("  Alumno %d: %.2f\n", i + 1, sumaAlumnos[i] / materias);
    }
   printf("\n");
    printf("Promedio de cada materia:\n");
    for (int j = 0; j < materias; j++) {
        printf("  Materia %d: %.2f\n", j + 1, sumaMaterias[j] / alumnos);
    }
   printf("\n");
    printf("Porcentaje de notas aprobadas: %.2f%%\n", (float)notasAprobadas / (alumnos * materias) * 100);
   printf("\n");
    printf("Notas en la diagonal principal:\n");
    for (int i = 0; i < alumnos && i < materias; i++) {
        printf("  Nota en [%d][%d]: %.2f\n", i, i, notas[i][i]);
    }
    printf("\n");
    printf("Nota máxima: %.2f, Alumno %d, Materia %d\n", notaMaxima, alumnoMax + 1, materiaMax + 1);

    return 0;
}
