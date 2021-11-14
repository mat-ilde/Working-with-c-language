#include <stdio.h>
#include <stdlib.h>
#define var
int main() {
    const float productoxeuro = 0.5;

    // declaración de variables
    int producto, producto_max;
    float precio, precio_max , total;

    //asignación de valores//
    total = 0.0;
    precio_max = 0.0;
    producto_max = 0;
    
    //Entrada de codigo producto en forma de entero
    printf("Introduzca el producto: ");
    scanf("%d", &producto);
    getchar();

    //Entrada del precio del producto
    while (producto>0){
        printf("Introduzca el precio: ");
        scanf("%f",&precio);
        getchar();
        total= total+precio;

        //condición del código 
        if (precio>precio_max){
            precio_max= precio;
            producto_max= producto;
        }
        printf("Introduzca el producto: ");
        scanf("%d", &producto);
        getchar();
    }
    //Salida por pantalla
    printf("total = $%2.f.\n", total);
    printf("producto_max = %d.\n", producto_max );
    printf("puntosxeuro = $%2.f.\n", productoxeuro*total );
        
    return 0; 

        
}
    


    
    
 
