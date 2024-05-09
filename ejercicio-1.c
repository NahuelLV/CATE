#include <stdio.h>
#include <stdlib.h>

int main() {
float monto_total;
printf("Ingrese el monto de su compra:");
scanf("%f", &monto_total);
float descuento = monto_total * 0.20;
printf("Su descuento es de: %2.f\n", descuento);
float monto_final = monto_total - descuento;
printf("Su monto a pegar luego del descuento es de: %2.f", monto_final);
    return 0;
}
