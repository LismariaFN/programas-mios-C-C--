#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int largo, ancho, **puntero, **puntero2, aux, **punt;

void imprecion(int **puntero, int largo, int ancho);

int main()
{
    printf("introduce el ancho de la metrix ");
    scanf("%d", &ancho);
    printf("introduce el largo de la metrix ");
    scanf("%d", &largo);
    puntero = (int **)malloc(ancho * sizeof(int *));
    for (int i = 0; i < ancho; i++)
    {
        puntero[i] = (int *)malloc(largo * sizeof(int));
    }
    imprecion(puntero, largo, ancho)
    return 0;
}

void imprecion(int **puntero, int largo, int ancho)
{
    for (int i = 0; i < ancho; i++)
    {
        for (int j = 0; j < largo; j++)
        {
            printf("%d,", puntero[i][j]);
        }
    }
    printf("imprecion correcta\n");
}