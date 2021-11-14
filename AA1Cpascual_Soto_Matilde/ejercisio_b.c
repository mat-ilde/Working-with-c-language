#include <stdio.h>
#include <stdlib.h>
#define var
int main(){
    const float puntosxeuro = 0.5;
    
    // declaración de variables
    int producto, producto_max;
    float precio, precio_max , total_productos, total_perfumeria;

    // asignación de valores
    total_productos = 0.0;
    total_perfumeria = 0,0;
    precio_max = 0.0;
    producto_max = 0;
   
    //Entrada del código del producto
    printf("Introduzca el producto: ");
    scanf("%d", &producto);
    getchar();

    //Bucle para mirar que el producto tiene un código distinto de 0
    while (producto>0){
       //Entrada de precio del producto
        printf("Introduzca el precio: ");
        scanf("%f",&precio);
        getchar();
        total_productos= total_productos + precio;

        //condición para comprobar el producto de mayor precio

        if (precio>precio_max){
            precio_max= precio;
            producto_max= producto;
        }
        // condición para comprobar si pertenece o no a la sección de perfumería
        if ( producto>=350 && producto<=400)  {
            total_perfumeria= total_perfumeria + precio;
            
        }
        //Entrada de producto
        printf("Introduzca el producto: ");
        scanf("%d", &producto);
        getchar();
    }

    //Salida por pantalla el gasto total, y gasto en la sección de perfumería

    printf("total_productos = $%.2f\n", total_productos);
    printf("producto_max = %d\n", producto_max );
    printf("puntosxeuro = %.2f\n", puntosxeuro*total_productos );
    printf("total_perfumeria = $%.2f\n", total_perfumeria );
    
        
    return 0; 

        
}
    


    
    
 
