//Precio del producto con descuento e IVA
#include<stdio.h>
#define Descuento 0.10
#define IVA 0.16
int main(){
    float precio, precio_descuento1, precio_final, precio_iva, precio_descuento; 
    printf("Precio del producto: ");
    scanf("%f", &precio);
    precio_descuento1 = precio * Descuento;
    precio_descuento = precio - precio_descuento1;
    precio_iva = precio_descuento * IVA;
    precio_final = precio_descuento - precio_iva; 
    printf("Precio con descuento: %.3f\n Precio con IVA: %.3f", precio_descuento, precio_final);
    return 0;
}