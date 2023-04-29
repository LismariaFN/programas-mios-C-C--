#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Escriba un programa que permita realizar la suma de dos vectores dinámicos. El
       tamaño se le pide al usuario y los mismos se inicializan con valores */
/* ***************************************************************************************
 *                                                                                        *
 *                                                                                        *
 *          A TODOS LOS METODOS SIGUIENTES LA FALTAN LA VERIFICACION DE ERRORES           *
 *                                                                                        *
 *                                                                                        *
 ******************************************************************************************
 */

/*estos son metodos del ejercicio anterior estan en el codigo 7*/
void rellenaMatriz(int l, int n, int rango, int **puntero2);
int valor_randun(int ini, int fin);
int dinamicaInt(int **a, int ancho, int largo);
void imprecion(int **puntero, int largo, int ancho);
/*datos*/
int largo, ancho, **puntero, **puntero2, aux, **punt;
void sumaMatriz(int **puntero, int **puntero2, int **punt, int largo, int ancho);

/*aqui empieza el main*/
int main()
{
    printf("introduce el ancho de la metrix ");
    scanf("%d", &ancho);
    printf("introduce el largo de la metrix ");
    scanf("%d", &largo);
    int p = dinamicaInt(puntero2, ancho, largo);
    int pp = dinamicaInt(puntero, ancho, largo);
    int ppp = dinamicaInt(punt, ancho, largo);
    if (p == 0 || pp == 0 || ppp == 0)
    {
        printf("no hay memoria");
    }
    else
    {
        printf("introduce el rango con q quirers rellenar la primera matriz");
        scanf("%d", &aux);
        rellenaMatriz(largo, ancho, aux, puntero2);
        printf("introduce el rango con q quirers rellenar la segunda matriz");
        scanf("%d", &aux);
        rellenaMatriz(largo, ancho, aux, puntero);
        printf("\n");
        imprecion(puntero2, largo, ancho);
        printf("\n + \n");
        imprecion(puntero, largo, ancho);
        printf("\n = \n");
        sumaMatriz(puntero2, puntero, punt, largo, ancho);
        imprecion(punt, largo, ancho);
    }

    return 0;
}

/*codigo de los etodos del  este es un agujero negro no hace nada se come el codigo*/
void rellenaMatriz(int l, int n, int rango, int **k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            int g = valor_randun(0, rango);
            printf("123");

            *(*(k + i) + j) = g;
        }
    }
}

int valor_randun(int ini, int fin)
{
    int aux = ini - fin;
    int aux2 = rand();
    int result = aux2 % (aux + 1) + ini;
    return result;
}

int dinamicaInt(int **a, int ancho, int largo)
{
    a = (int **)calloc(ancho, sizeof(int));
    if (a == NULL)
    {
        printf("no hay memoria\n");
        return 0;
    }
    else
    { // printf("creo la unidimenconal\n");
        printf("dinamica \n");
        for (int i = 0; i < ancho; i++)
        {
            a[i] = (int *)calloc(largo + 1, sizeof(int));
        }
        if (a[ancho - 1] == NULL)
        {
            printf("no hay memoria\n");
            return 0;
        }
        else
        {
            return 1;
        }
    }
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

void sumaMatriz(int **puntero, int **puntero2, int **punt, int largo, int ancho)
{
    for (int i = 0; i < ancho; i++)
    {
        for (int j = 0; j < largo; j++)
        {
            punt[i][j] = puntero2[i][j] + puntero[i][j];
        }
    }
    printf("suma correcta\n");
}
