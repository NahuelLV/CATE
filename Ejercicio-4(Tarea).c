#include <stdio.h>
#include <stdlib.h>

int main() {
    float monto;
    printf("Buen dia!\n Ingrese el monto total de su compra: ");
    scanf("%f", &monto);
    float montoT;
    float descuento;
    if(monto >= 100000.0 && monto < 200000.0){
        descuento = monto * 0.10;
        montoT = monto - descuento;
    }else if(monto >= 200000.0 && monto < 300000.0){
        descuento = monto * 0.25;
        montoT = monto - descuento;
    }else if(monto >= 300000.0){
        descuento = monto * 0.30;
        montoT = monto - descuento;
    }else if( monto < 100000) {
        printf("No se le aplican descuentos, su total a pagar es de: %.2f\n", monto);
        char ct;
    printf("Desea pagar en cuotas(Y/N): ");
    scanf("%s", &ct);
 if(ct == 'y' || ct == 'Y'){
     float cuotas;
     printf("Ingrese en cuantas cuotas va a pagar: ");
     scanf("%f", &cuotas);
      montoT = monto / cuotas;
     printf("Tendrá que pagar %.2f por cada cuota", montoT);
    }else if(ct == 'n' || ct == 'N'){
    return 0;
    }
    return 0;
    }

    
    char r;
    printf("Usted esta registrado en la tienda(Y/N): ");
    scanf("%s", &r);
    float descuentoP = 0;
    if(r == 'y' || r == 'Y'){
        descuentoP = monto * 0.05;
        montoT -= descuentoP;
        printf("Debido a los descuentos totales, su total a pagar es de: %.2f\n", montoT);
    }else if(r == 'n' || r == 'N'){
        printf("Debido a los descuentos totales, su total a pagar es de: %.2f\n", montoT);
    }
    
    char ct;
    printf("Desea pagar en cuotas(Y/N): ");
    scanf("%s", &ct);
 if(ct == 'y' || ct == 'Y'){
     float cuotas;
     printf("Ingrese en cuantas cuotas va a pagar: ");
     scanf("%f", &cuotas);
     float montoF = montoT / cuotas;
     printf("Tendrá que pagar %.2f por cada cuota", montoF);
    }else if(ct == 'n' || ct == 'N'){
    return 0;
    }
    return 0;
}
