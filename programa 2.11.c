#include <stdio.h>

int main()
{
    int DIS, TIE;     // Declara las variables enteras DIS (distancia) y TIE (tiempo)
    float BIL;        // Declara la variable flotante BIL (costo del billete)
    // Pide al usuario que ingrese la distancia entre ciudades y el tiempo de estancia
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE); // Lee dos valores enteros del usuario y los asigna a DIS y TIE

    // Verifica si el doble de la distancia es mayor que 500 y el tiempo de estancia es mayor que 10
    if((DIS*2 > 500) && (TIE > 10))
    {
        BIL = DIS * 2 * 0.19 * 0.8; // Calcula el costo del billete con un descuento del 20%
    }else
    {
        BIL = DIS * 2 * 0.19;       // Calcula el costo del billete sin descuento
    }
     // Imprime el costo del billete formateado con dos decimales
     printf("\n\nCosto del billete: %7.2f", BIL);

    return 0;
}
