/* Ejercicio 2: realizar un programa que procese los datos de las personas que van a natacion. Se leen la edad y el nivel de cada asistente(1 = AVANZADO - 2 = INTERMEDIO - 3 = BASICO). Se cargan datos hasta que se ingrese una edad negativa y se admiten hasta 10 nadadores. Puede ser que no se presente nadie. Mostrar cuantos tienen nivel avanzado. Expresar en porcentaje. Promedio de edades de nivel basico. Porcentaje entre los de nivel basico que son mayores de edad. Edad minima y a que nivel asiste.
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int edad, nivel;
    int contadorAvanzado = 0;
    int contadorIntermedio = 0;
    int contadorBasico = 0;
    int sumaEdadesBasico = 0;
    int mayoresBasico = 0;
    int nivelEdadMinima = 0;
    int totalNadadores = 0;
    int edadMinima = -1;
    
    for (int i = 0; i < 10; i++) {
        printf("Ingrese la edad del nadador (edad = 0): ");
        scanf("%d", &edad);
        
        if (edad <= 0) {
            break;
        }
        
        printf("Ingrese el nivel del nadador (1 = AVANZADO, 2 = INTERMEDIO, 3 = BASICO): ");
        scanf("%d", &nivel);
        
        totalNadadores++;

        if (nivel == 1) {
            contadorAvanzado++;
        } else if (nivel == 2) {
            contadorIntermedio++;
        } else if (nivel == 3) {
            contadorBasico++;
            sumaEdadesBasico += edad;
            if (edad >= 18) {
                mayoresBasico++;
            }
        }

        if (edadMinima == -1 || edad < edadMinima) {
            edadMinima = edad;
            nivelEdadMinima = nivel;
        }
    }

    if (totalNadadores == 0) {
        printf("No se presentaron nadadores.\n");
    } else {
        double porcentajeAvanzado = (totalNadadores > 0) ? (contadorAvanzado * 100.0) / totalNadadores : 0;
        double promedioEdadBasico = (contadorBasico > 0) ? (sumaEdadesBasico * 1.0) / contadorBasico : 0;
        double porcentajeMayoresBasico = (contadorBasico > 0) ? (mayoresBasico * 100.0) / contadorBasico : 0;

        printf("\n--- Estadísticas ---\n");
        printf("Porcentaje de nivel avanzado: %.2f%%\n", porcentajeAvanzado);
        printf("Promedio de edades de nivel básico: %.2f\n", promedioEdadBasico);
        printf("Porcentaje de mayores de edad en nivel básico: %.2f%%\n", porcentajeMayoresBasico);
        printf("Edad mínima: %d, Nivel: %d\n", edadMinima, nivelEdadMinima);
    }

    return 0;
}
