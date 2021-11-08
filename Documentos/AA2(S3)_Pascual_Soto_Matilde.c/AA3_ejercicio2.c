#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#define NUMVOCALES 5
#define FINSEC '.'

typedef struct
{
    char vocal;
    int numVeces;
} tFrecUnaVocal;

struct tFrecUnaVocal;

typedef struct
{
    tFrecUnaVocal frecuencias[NUMVOCALES+1];
    int nVocales;

} tFrecVocales;

struct tFrecVocales;

bool esVocal(char c)
{
    if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
    {
        return true;
    }
    return false;
}
void inicializarFrecuencias(tFrecVocales *frecVocales)
{
    frecVocales->nVocales = 0;
}

void procesarCaracter(char c, tFrecVocales *frecVocales)
{
    tFrecUnaVocal frecuencias[NUMVOCALES+1];
    int i;
    bool encontrado;
    i = 0;
    esVocal(c);
    char espacio;
    espacio=' ';
    if (esVocal(c) == true)
    {  
        encontrado = false;
        i=1;
        while (i <= frecVocales->nVocales && encontrado==false)
        {   
            if(frecVocales->frecuencias[i].vocal==c)
            {
                encontrado=true;
               
            }
            i=i+1;
        }
    }  

    if (esVocal(c) == false || frecVocales->frecuencias[i].vocal==espacio)
    {
        frecVocales->frecuencias[i].numVeces=0;
        encontrado=true;
    }

    if (encontrado==false)
    {   
        
        frecVocales->nVocales = frecVocales->nVocales + 1;
        frecVocales->frecuencias[frecVocales->nVocales].vocal=c;
        frecVocales->frecuencias[frecVocales->nVocales].numVeces=1;
    }

    if(encontrado==true)
    {   
        frecVocales->frecuencias[i-1].numVeces = frecVocales->frecuencias[i-1].numVeces+1;
    }

}

int cuentaVocales(tFrecVocales frecVocales)
{   
    int total,i;
    total = 0;
    char c;
    esVocal(c);
    bool encontrado;
    
    for (i = 1; i-1 < frecVocales.nVocales; i = i + 1)
    {
        total = total + frecVocales.frecuencias[i].numVeces;
       
    }
    return total;
}

int mostrarResultados(tFrecVocales frecVocales)
{
    int i, totalVocales;
    float final_num, porcentaje, porcentaje_final;
    final_num=0.00;
    cuentaVocales(frecVocales);
    totalVocales = cuentaVocales(frecVocales);
    printf("total de vocales :%d\n", totalVocales);
    char c;
    esVocal(c);
    for (i = 1; i-1 < frecVocales.nVocales; i = i + 1)
    {
        final_num=final_num+frecVocales.frecuencias[i].numVeces; 
    }
    for (i = 1; i-1 < frecVocales.nVocales; i = i + 1 )
    {   
        printf("caracter: %c\n",frecVocales.frecuencias[i].vocal);
        if (totalVocales != 0 )
        {   
            porcentaje=frecVocales.frecuencias[i].numVeces*100;
            porcentaje_final= porcentaje/final_num;
            printf("frecuencia : %.2f %s", porcentaje_final,"%\n");
        }
        else
        {
            printf(" %c %d",frecVocales.frecuencias[i].vocal, 0);
           
        }
        
    }
}
int main()
{
    tFrecVocales *frecVocales;
    char car,c;
    int j;
    j=0;
    inicializarFrecuencias(frecVocales);
    printf("introduce texto:\n ");
    scanf("%c", &car);
    esVocal(c);
    while (car!= FINSEC)
    {   
        procesarCaracter(car, frecVocales);
        scanf("%c", &car);
    }
    return mostrarResultados(*frecVocales);
    
}