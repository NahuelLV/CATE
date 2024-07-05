/* Ejercicio 1: realizar un programa para imprimir el ticket de un supermarcado, se lee el precio de cada producto y la cantidad. Finaliza el programa al ingresar 0 como cantidad. Mostrar precio promedio por producto(todos los precios / los productos), total a pagar, precio del producto con mayor cantidad.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidad;
    double precio;
    int totalProductos = 0;
    double totalPrecio = 0;
    double totalPagar = 0;
    int maxCantidad = 0;
    double precioMaxCantidad = 0;

    while (1) {
        printf("Ingrese el precio del producto (0 para terminar): ");
        scanf("%lf", &precio);  // Cambiado a %lf para leer un double
        if (precio == 0.0) {
            break;
        }
        printf("Ingrese la cantidad de productos comprados: ");
        scanf("%d", &cantidad);

        totalProductos += cantidad;
        totalPrecio += precio * cantidad;
        totalPagar += precio * cantidad;

        if (cantidad > maxCantidad) {
            maxCantidad = cantidad;
            precioMaxCantidad = precio;
        }
    }

    if (totalProductos == 0) {
        printf("No se ingresaron productos.\n");
    } else {
        double precioPromedio = totalPrecio / totalProductos;

        printf("\n--- Ticket del Supermercado ---\n");
        printf("Precio promedio por producto: %.2f\n", precioPromedio);
        printf("Total a pagar: %.2f\n", totalPagar);
        printf("Precio del producto con mayor cantidad: %.2f\n", precioMaxCantidad);
    }

    return 0;
}
