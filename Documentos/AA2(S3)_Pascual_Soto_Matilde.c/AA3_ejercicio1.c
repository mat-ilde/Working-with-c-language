#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
/*Declara un tipo de datos tCaja para almacenar la información referente
de una caja, sabiendo que está identificada por una letra y, además del
importe mensual, nos interesa almacenar el número de días del mes
que ha sido abierta.*/

typedef struct
{
    char id;
    int importeMensual, importe;
    int diasMesAbierta;
} tCaja;
struct tCaja;

/*Declara un tipo de datos tRecaptacionMes y las constantes
necesarias para almacenar la recaudación de las cajas que
como mínimo será 1 y como máximo serán 5. Puedes utilizar el
tipo de datos tCaja sin volver a repetir la declaración.*/

typedef struct
{  
    int NumerodeCajasTengo;
    tCaja Cajas[5];

} tRecaptacionMes;
struct tRecaptacionMes;

/*Declara un tipo de datos tRecaptacionAnual y las constantes
necesarias para almacenar la recaudación de los 12 meses del
año. Se puede utilizar el tipo de datos tRecaptacionMes sin
volver a repetir la declaración.*/

typedef struct
{
    tRecaptacionMes meses[12];
   
} tRecaptacionAnual;
struct tRecaptacionAnual;

//b) Diseñar una función que devuelva la recaudación de un mes dado.
float recaudacionMesDado(tRecaptacionMes mesDado)
{
    int i;
    float totalMensual;
    totalMensual= 0;
    i=0;
    for(i=0; i<mesDado.NumerodeCajasTengo; i=i+1)
    {   

       totalMensual=totalMensual+mesDado.Cajas[i].importeMensual; 
    }
    return totalMensual;
}
/* c) Diseñar una acción que inicialice con un número de cajas igual a 0 todos los
meses del año.*/
void inicializacionCajas(tRecaptacionAnual *inicio)
{   
    int i;
    i=0;
    for(i=0; i<12; i=i+1)
    {
        inicio->meses[i].NumerodeCajasTengo=0;
        
        
    }
    
    
}

int main()
{   
    
    tRecaptacionAnual inicio;
    tRecaptacionMes enero,febrero;
    inicializacionCajas(&inicio);
    tCaja caja1;
    tCaja caja2;
    caja1.id='a';
    caja2.id='b';
    caja1.importeMensual=100.00;
    caja2.importeMensual=500.00;
    enero.Cajas[0]=caja1;
    enero.Cajas[1]=caja2;
    febrero.NumerodeCajasTengo=5;
    enero.NumerodeCajasTengo=2;
    inicio.meses[0]=enero;
    inicio.meses[1]=febrero;
    printf("enero.NumerodeCajasTengo:%d\n", inicio.meses[0].NumerodeCajasTengo);
    inicializacionCajas(&inicio);
    float recaudacionEnero=recaudacionMesDado(enero);
    printf("febrero.NumerodeCajasTengo:%d\n", inicio.meses[1].NumerodeCajasTengo);

}   

