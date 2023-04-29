#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dim_usu;   /* dimension del vector del usuario */
    int dim_par;   /* dimensión del vector de elementos pares */
    int n;         /* indice para los for */
    int m;         /* indice para recorrer arrya de pares */
    int *pvec_usu; /* puntero al vector introducido por el usuario */
    int *pvec_par; /* puntero al vector elementos pares (dinamico) */
    printf("Introduzca la dimension del vector: ");
    scanf(" %d", &dim_usu);
    pvec_usu = (int *)calloc(dim_usu, sizeof(int)); /*Asignar memoria vect. usuario
                                                     */
    /*pvec_usu = (int *) malloc( dim_usu*sizeof(int));*/
    if (pvec_usu == NULL)
    { /* si no hay memoria */
        printf("Error: no hay memoria para un vector de %d elementos\n", dim_usu);
    }
    else
    {
        for (n = 0; n < dim_usu; n++) /* pedir elementos del vector */
        {
            printf("Elemento %d = ", n);
            scanf("%d", &(pvec_usu[n]));
        }
        dim_par = 0;
        for (n = 0; n < dim_usu; n++)
            if ((pvec_usu[n] % 2) == 0)
                dim_par++;
        pvec_par = (int *)calloc(dim_par, sizeof(int));
        if (pvec_par == NULL)
        { /* si no hay memoria */
            printf("Error: no hay memoria para un vector de %d elementos\n",dim_par);
        }
        else
        { /* se copian los elementos pares */
            m = 0;
            for (n = 0; n < dim_usu; n++)
                if ((pvec_usu[n] % 2) == 0)
                {
                    pvec_par[m] = pvec_usu[n];
                    m++;
                }
            printf("\n-----------------------------\n");
            for (n = 0; n < dim_par; n++)
                printf("Elemento par %d = %d \n", n, pvec_par[n]);
        }
        free(pvec_par);
    }
    free(pvec_usu);
    return 0;
}