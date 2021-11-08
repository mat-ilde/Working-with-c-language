//Encontrar pareja pitágorica

//Elprograma recibirá una secuencia de numeros enteros positivos distintos de 0
// intenta encontrar la pareja pitágorica de los números de la secuencia
//devolverá el número de la secuencia con su pareja pitágorica encontrada

//Ejemplos de input con sus ouput

//in= 5, 10, 8, 13, 0
//out= 5 4,3
//out= 10 6,8
//out= 13 12,5

//in= 1, 2, 3, 8, 0
//out= 

//in= 25, 11, 26, 0
//out= 25 24,7
//out= 26 10,24

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define var

bool pitagoricos(int i, int a, int b)
{
    if (a * a + b * b == i * i)
    {
        return true;
    }
    return false;
}

bool busca_pareja(int my_number)
{
    int menor, mayor;
    bool verificacion;
    //inicializo verficación para cada vez que encuentre uno siga con el siguiente numero
    verificacion = false;
    //inicializo menor y mayor siempre que paso al siguiente numero
    menor = 1;
    mayor = 1;
    //bucle para iterar con menor
    while (menor < my_number && verificacion == false)
    {
        mayor = menor;
        //bucle para iterar con b los cambios importantes se hacen en este bucle debido a que
        // ya ha recorrido tanto i, menor y mayor
        while (mayor < my_number && verificacion == false)
        {
            // condición para comprobar si en algún valor de menor y mayor menor*menor+mayor*mayor=i*i
            if (pitagoricos(my_number, menor, mayor))
            {
                // le doy el valor para confirmar que se cumple esta condición
                verificacion = true;

                // comprobando si es true me devolverá los valores que le pida

                printf("tu número: %d\n", my_number);
                printf("menor: %d\n", menor);
                printf("mayor: %d\n", mayor);
            }
            mayor = mayor + 1;
        }
        menor = menor + 1;
    }
}

int main()
{
    int  my_number;

    printf("Introduzca el numero: ");
    scanf("%d", &my_number);
    getchar();
    while (my_number != 0)
    {
        busca_pareja(my_number);
        printf("Introduzca el numero: ");
        scanf("%d", &my_number);
        getchar();
    }

    return 0;
}
